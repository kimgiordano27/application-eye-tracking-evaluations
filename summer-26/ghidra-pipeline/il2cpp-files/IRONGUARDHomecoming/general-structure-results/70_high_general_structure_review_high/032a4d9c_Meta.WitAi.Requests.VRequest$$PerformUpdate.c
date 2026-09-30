/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$PerformUpdate
ENTRY_POINT: 032a4d9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_VRequest__PerformUpdate(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 in_w8;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  code *pcVar10;
  uint uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x21 + 0xe14) = in_w8;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  puVar3 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
  lVar8 = *(long *)puVar2;
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
  }
  uVar9 = FUN_03579868(uVar9,0);
  uVar5 = FUN_03579868(*(undefined8 *)puVar3,0);
  uVar6 = FUN_03582560(uVar9,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar8 = *(long *)puVar2;
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar8);
    }
    plVar7 = (long *)FUN_03579868(uVar9,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    uStack000000000000000c = *(uint *)((long)unaff_x19 + 0xc) & 0x7fffffff;
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&stack0x0000000c);
    FUN_0340f2f0(*(undefined8 *)
                  Method_Unity_Collections_FixedStringMethods_Append<FixedString32Bytes>__,uVar9,
                 uVar5,0);
  }
  else {
    plVar7 = (long *)*unaff_x19;
    if ((plVar7 == (long *)0x0) ||
       (*plVar7 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
      lVar8 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar4 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar4 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x48);
      if ((uVar1 & 1) == 0) {
        FUN_01ecaf44(lVar4);
      }
      _uStack0000000000000010 = (*pcVar10)();
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      FUN_027250cc(&stack0x00000010,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
    }
    else {
      FUN_03410500(plVar7,(int)unaff_x19[1],*(uint *)((long)unaff_x19 + 0xc) & 0x7fffffff,0);
    }
  }
  return;
}


