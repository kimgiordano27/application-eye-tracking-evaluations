/*
FUNCTION_NAME: Unity.Collections.Memory.Unmanaged.Array$$Resize<byte>
ENTRY_POINT: 02372630
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

void Unity_Collections_Memory_Unmanaged_Array__Resize<byte>(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  
code_r0x02372630:
  if (unaff_w26 < param_1) {
    if (*(long *)(unaff_x28 + 0x18) != 0) {
      lVar4 = FUN_0265d74c(*(long *)(unaff_x28 + 0x18),unaff_w26,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__);
      if (((*(long *)(unaff_x29 + 0x10) != 0) &&
          (System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x29 + 0x10),0), lVar4 != 0))
         && (*(long *)(lVar4 + 0x10) != 0)) {
        plVar5 = (long *)FUN_0265d924(*(long *)(lVar4 + 0x10),
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                     );
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_023726ec;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x25,0);
LAB_023726ec:
          uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar10 & 1) == 0) goto LAB_023727e4;
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x27) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02372748;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x27,0);
LAB_02372748:
          plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar1 = *(byte *)(*unaff_x21 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x21)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          plVar7 = (long *)plVar7[2];
          lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar9 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar7);
          }
          thunk_FUN_01f11920(plVar7);
          if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b02c4c();
        } while( true );
      }
    }
  }
  else {
    lVar4 = *(long *)(unaff_x29 + 0x10);
    uVar8 = FUN_039b1960(in_stack_00000000,unaff_x29,0);
    if (lVar4 != 0) {
      FUN_039afab4(lVar4,uVar8,0);
      return;
    }
  }
LAB_023729c0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_023727e4:
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02372844;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02372844:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  FUN_039b6544(unaff_x29,*(undefined8 *)(lVar4 + 0x18),uStack000000000000000c,0);
  puVar2 = Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
  if (*(long *)(in_stack_00000010 + 0x18) == 0) goto LAB_023729c0;
  iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  if (unaff_w26 < iVar3 + -1) {
    lVar4 = *(long *)(unaff_x29 + 0x10);
    uVar8 = FUN_039b1960(in_stack_00000000,unaff_x29,0);
    if (lVar4 == 0) goto LAB_023729c0;
    FUN_039afc24(lVar4,uVar8,0,uStack0000000000000008 & 1,0);
  }
  unaff_w26 = unaff_w26 + 1;
  if (*(long *)(in_stack_00000010 + 0x18) == 0) goto LAB_023729c0;
  param_1 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),*(undefined8 *)puVar2);
  unaff_x28 = in_stack_00000010;
  goto code_r0x02372630;
}


