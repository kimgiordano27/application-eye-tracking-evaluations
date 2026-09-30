/*
FUNCTION_NAME: Unity.Collections.Memory.Unmanaged.Array$$Resize<NativeQueueBlockPoolData>
ENTRY_POINT: 02372700
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0237285c) */
/* WARNING: Removing unreachable block (ram,0x023729a0) */
/* WARNING: Removing unreachable block (ram,0x023729c4) */

void Unity_Collections_Memory_Unmanaged_Array__Resize<NativeQueueBlockPoolData>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
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
  
code_r0x02372700:
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x27) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02372748;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x27,0);
LAB_02372748:
  plVar5 = (long *)(*(code *)*puVar4)(unaff_x28,puVar4[1]);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar1 = *(byte *)(*unaff_x21 + 0x130);
  if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x21)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  plVar5 = (long *)plVar5[2];
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar5);
  }
  thunk_FUN_01f11920(plVar5);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02b02c4c();
  do {
    lVar7 = *unaff_x28;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_023726ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x25,0);
LAB_023726ec:
    uVar8 = (*(code *)*puVar4)(unaff_x28,puVar4[1]);
    if ((uVar8 & 1) != 0) break;
    if (unaff_x28 != (long *)0x0) {
      lVar7 = *unaff_x28;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02372844;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(unaff_x28,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02372844:
      (*(code *)*puVar4)(unaff_x28,puVar4[1]);
    }
    FUN_039b6544(unaff_x19,*(undefined8 *)(unaff_x29 + 0x18),uStack000000000000000c,0);
    puVar2 = Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
    if (*(long *)(in_stack_00000010 + 0x18) == 0) {
LAB_023729c0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    if (unaff_w26 < iVar3 + -1) {
      lVar7 = *(long *)(unaff_x19 + 0x10);
      uVar6 = FUN_039b1960(in_stack_00000000,unaff_x19,0);
      if (lVar7 == 0) goto LAB_023729c0;
      FUN_039afc24(lVar7,uVar6,0,uStack0000000000000008 & 1,0);
    }
    unaff_w26 = unaff_w26 + 1;
    if (*(long *)(in_stack_00000010 + 0x18) == 0) goto LAB_023729c0;
    iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),*(undefined8 *)puVar2);
    if (iVar3 <= unaff_w26) {
      lVar7 = *(long *)(unaff_x19 + 0x10);
      uVar6 = FUN_039b1960(in_stack_00000000,unaff_x19,0);
      if (lVar7 != 0) {
        FUN_039afab4(lVar7,uVar6,0);
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
  param_1 = *unaff_x28;
  goto code_r0x02372700;
}


