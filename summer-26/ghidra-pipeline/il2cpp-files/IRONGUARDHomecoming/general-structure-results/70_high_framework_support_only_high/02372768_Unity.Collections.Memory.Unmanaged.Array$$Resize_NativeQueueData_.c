/*
FUNCTION_NAME: Unity.Collections.Memory.Unmanaged.Array$$Resize<NativeQueueData>
ENTRY_POINT: 02372768
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0237285c) */
/* WARNING: Removing unreachable block (ram,0x023729a0) */
/* WARNING: Removing unreachable block (ram,0x023729c4) */

void Unity_Collections_Memory_Unmanaged_Array__Resize<NativeQueueData>
               (long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  uint in_w10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar8;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  
code_r0x02372768:
  if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  plVar8 = (long *)param_2[2];
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar8);
  }
  thunk_FUN_01f11920(plVar8);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02b02c4c();
  do {
    lVar5 = *unaff_x28;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023726ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x25,0);
LAB_023726ec:
    uVar6 = (*(code *)*puVar3)(unaff_x28,puVar3[1]);
    if ((uVar6 & 1) != 0) break;
    if (unaff_x28 != (long *)0x0) {
      lVar5 = *unaff_x28;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02372844;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x28,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02372844:
      (*(code *)*puVar3)(unaff_x28,puVar3[1]);
    }
    FUN_039b6544(unaff_x19,*(undefined8 *)(unaff_x29 + 0x18),uStack000000000000000c,0);
    puVar1 = Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
    if (*(long *)(in_stack_00000010 + 0x18) == 0) {
LAB_023729c0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar2 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    if (unaff_w26 < iVar2 + -1) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      uVar4 = FUN_039b1960(in_stack_00000000,unaff_x19,0);
      if (lVar5 == 0) goto LAB_023729c0;
      FUN_039afc24(lVar5,uVar4,0,uStack0000000000000008 & 1,0);
    }
    unaff_w26 = unaff_w26 + 1;
    if (*(long *)(in_stack_00000010 + 0x18) == 0) goto LAB_023729c0;
    iVar2 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),*(undefined8 *)puVar1);
    if (iVar2 <= unaff_w26) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      uVar4 = FUN_039b1960(in_stack_00000000,unaff_x19,0);
      if (lVar5 != 0) {
        FUN_039afab4(lVar5,uVar4,0);
        return;
      }
      goto LAB_023729c0;
    }
    if (*(long *)(in_stack_00000010 + 0x18) == 0) goto LAB_023729c0;
    unaff_x29 = FUN_0265d74c(*(long *)(in_stack_00000010 + 0x18),unaff_w26,
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__);
    if (((*(long *)(unaff_x19 + 0x10) == 0) ||
        (System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x19 + 0x10),0), unaff_x29 == 0)
        ) || (*(long *)(unaff_x29 + 0x10) == 0)) goto LAB_023729c0;
    unaff_x28 = (long *)FUN_0265d924(*(long *)(unaff_x29 + 0x10),
                                     *(undefined8 *)
                                      Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__)
    ;
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  lVar5 = *unaff_x28;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x27) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02372748;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x27,0);
LAB_02372748:
  param_2 = (long *)(*(code *)*puVar3)(unaff_x28,puVar3[1]);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_1 = *param_2;
  param_3 = *unaff_x21;
  in_w10 = (uint)*(byte *)(param_1 + 0x130);
  in_x9 = (ulong)*(byte *)(param_3 + 0x130);
  goto code_r0x02372768;
}


