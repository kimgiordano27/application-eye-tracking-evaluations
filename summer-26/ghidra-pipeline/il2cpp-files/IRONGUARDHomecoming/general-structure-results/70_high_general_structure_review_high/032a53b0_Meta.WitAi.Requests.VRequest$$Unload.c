/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$Unload
ENTRY_POINT: 032a53b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__Unload(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  long *plVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  *(undefined1 *)(unaff_x22 + 0xe16) = 1;
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar1 = *(uint *)(unaff_x21 + 1);
  if ((int)uVar1 < 0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    plVar13 = (long *)*unaff_x21;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x70);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    if (plVar13 != (long *)0x0) {
      if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
      {
        lVar5 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x70);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar9 = *plVar13;
        if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(lVar9 + 0x130)) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
        {
          (**(code **)(lVar9 + 0x188))
                    (&stack0x00000008,plVar13,uVar1 & 0x7fffffff,*(undefined8 *)(lVar9 + 400));
          unaff_x19[2] = in_stack_00000018;
          unaff_x19[1] = in_stack_00000010;
          *unaff_x19 = in_stack_00000008;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar13);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  puVar4 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  uVar12 = FUN_03579868(uVar12,0);
  uVar6 = FUN_03579868(*(undefined8 *)puVar4,0);
  uVar7 = FUN_03582560(uVar12,uVar6,0);
  plVar13 = (long *)*unaff_x21;
  if ((((uVar7 & 1) == 0) || (plVar13 == (long *)0x0)) ||
     (*plVar13 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar5 = thunk_FUN_01f116d0(plVar13,lVar5);
    if (lVar5 == 0) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      return;
    }
    if (*(int *)((long)unaff_x21 + 0xc) < 0) {
      lVar8 = *(long *)(unaff_x20 + 0x20);
      uVar11 = *(undefined4 *)(unaff_x21 + 1);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar9 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar9 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xb0);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      (*pcVar10)(lVar5 + 0x20,uVar11,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xb0));
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      *unaff_x19 = 0;
      goto LAB_032a56d8;
    }
    FUN_034a48dc(lVar5,3,0);
    lVar9 = *(long *)(unaff_x20 + 0x20);
    uVar11 = *(undefined4 *)(unaff_x21 + 1);
    lVar5 = lVar5 + 0x20;
  }
  else {
    FUN_034a48dc(plVar13,3,0);
    lVar5 = FUN_0340ce04(plVar13,0);
    lVar9 = *(long *)(unaff_x20 + 0x20);
    uVar11 = *(undefined4 *)(unaff_x21 + 1);
  }
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0xb0);
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  (*pcVar10)(lVar5,uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0xb0));
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
LAB_032a56d8:
  FUN_0354b5dc();
  return;
}


