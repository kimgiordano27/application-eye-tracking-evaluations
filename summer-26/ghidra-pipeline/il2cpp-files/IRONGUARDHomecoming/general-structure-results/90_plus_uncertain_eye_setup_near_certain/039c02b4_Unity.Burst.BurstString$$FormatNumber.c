/*
FUNCTION_NAME: Unity.Burst.BurstString$$FormatNumber
ENTRY_POINT: 039c02b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039c0400) */
/* WARNING: Removing unreachable block (ram,0x039c04f8) */

void Unity_Burst_BurstString__FormatNumber(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  undefined8 uVar8;
  long *unaff_x25;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
code_r0x039c02b4:
  plVar2 = (long *)FUN_0265d924(param_1,*unaff_x28);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_039c0310;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x29,0);
LAB_039c0310:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_039c036c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x25,0);
LAB_039c036c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    FUN_039b554c();
  } while( true );
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_039c03e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039c03e8:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_039c04f4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar2 = *(long **)(unaff_x23 + 0x10);
  FUN_039af678(*(long *)(unaff_x20 + 0x10),plVar2);
  if (plVar2 == (long *)0x0) goto LAB_039c04f4;
  uVar4 = (**(code **)(*plVar2 + 1000))(plVar2,*(undefined8 *)(*plVar2 + 0x3f0));
  uVar8 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar8 = FUN_03579868(uVar8,0);
  uVar6 = FUN_03583338(uVar4,uVar8,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_039c04f4;
    FUN_039ab8e8();
  }
  unaff_w21 = unaff_w21 + 1;
  iVar1 = FUN_0265d6c4();
  if (iVar1 <= unaff_w21) {
    return;
  }
  unaff_x23 = FUN_0265d74c();
  if (((*(long *)(unaff_x20 + 0x10) == 0) ||
      (FUN_039ab888(*(long *)(unaff_x20 + 0x10)), unaff_x23 == 0)) ||
     (param_1 = *(long *)(unaff_x23 + 0x18), param_1 == 0)) goto LAB_039c04f4;
  goto code_r0x039c02b4;
}


