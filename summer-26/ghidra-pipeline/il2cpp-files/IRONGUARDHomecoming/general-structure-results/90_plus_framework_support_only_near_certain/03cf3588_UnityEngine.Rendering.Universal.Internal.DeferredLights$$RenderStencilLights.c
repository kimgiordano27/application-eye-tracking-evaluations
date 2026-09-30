/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$RenderStencilLights
ENTRY_POINT: 03cf3588
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03cf3b90) */

long UnityEngine_Rendering_Universal_Internal_DeferredLights__RenderStencilLights(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  long lVar13;
  long unaff_x25;
  long unaff_x26;
  long lVar14;
  undefined8 uVar15;
  long unaff_x29;
  long *in_stack_00000000;
  long *in_stack_00000010;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    param_1 = *unaff_x19;
  }
  uVar15 = **(undefined8 **)(param_1 + 0xb8);
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__);
  FUN_02e631d0(uVar4,uVar15,*(undefined8 *)PTR_DAT_04572870,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x28);
  *puVar5 = uVar4;
  thunk_FUN_01f51358(puVar5,uVar4);
  *(undefined8 *)(unaff_x26 + 0x48) = uVar4;
  thunk_FUN_01f51358((undefined8 *)(unaff_x26 + 0x48),uVar4);
  if (unaff_x25 != 0) {
    FUN_025d9620();
    plVar8 = (long *)PTR_DAT_04572828;
    if ((*unaff_x21 != 0) && (lVar6 = *(long *)(*unaff_x21 + 0x48), lVar6 != 0)) {
      FUN_025d9620(lVar6,*unaff_x24,*(undefined8 *)PTR_DAT_04571910);
      lVar13 = *(long *)(unaff_x23 + 0x48);
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
      FUN_03cf29b4();
      lVar7 = *unaff_x19;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *unaff_x19;
      }
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *unaff_x19;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                   );
        FUN_02e631d0(lVar14,uVar4,*(undefined8 *)PTR_DAT_04572878,0);
        plVar8 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0x30);
        *plVar8 = lVar14;
        thunk_FUN_01f51358(plVar8,lVar14);
        plVar8 = (long *)PTR_DAT_04572828;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x48) = lVar14;
        thunk_FUN_01f51358((long *)(lVar6 + 0x48),lVar14);
        if (lVar13 != 0) {
          FUN_025d9620(lVar13,lVar6,*(undefined8 *)PTR_DAT_04571910);
          if ((*unaff_x21 != 0) && (*(long *)(*unaff_x21 + 0x48) != 0)) {
            FUN_025d9620();
            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572838);
            FUN_030f2380(uVar4,*(undefined8 *)PTR_DAT_04572830);
            puVar5 = (undefined8 *)(unaff_x29 + 0x18);
            *puVar5 = uVar4;
            thunk_FUN_01f51358(puVar5,uVar4);
            FUN_03cf3dc0();
            lVar6 = *unaff_x19;
            uVar4 = *puVar5;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar6 = *unaff_x19;
            }
            lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
            if (lVar7 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar6 = *unaff_x19;
              }
              uVar15 = **(undefined8 **)(lVar6 + 0xb8);
              lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572810);
              FUN_02e6c748(lVar7,uVar15,*(undefined8 *)PTR_DAT_04572858,0);
              plVar9 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0x40);
              *plVar9 = lVar7;
              thunk_FUN_01f51358(plVar9,lVar7);
            }
            plVar9 = (long *)FUN_022fbe3c(uVar4,lVar7,*(undefined8 *)PTR_DAT_04572808);
            if (plVar9 != (long *)0x0) {
              lVar6 = *plVar9;
              uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04572818) {
                    puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_03cf3864;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_04572818,0);
LAB_03cf3864:
              plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
              puVar2 = PTR_DAT_04572820;
              puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              do {
                lVar6 = *plVar9;
                uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                      puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_03cf38d4;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03cf38d4:
                uVar11 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                if ((uVar11 & 1) == 0) {
                  if (plVar9 == (long *)0x0) goto LAB_03cf39d4;
                  lVar6 = *plVar9;
                  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar11 == 0) goto LAB_03cf39ac;
                  piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  goto LAB_03cf3994;
                }
                lVar6 = *plVar9;
                uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_03cf3930;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03cf3930:
                uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c(uVar4,uVar4);
                }
                lVar6 = *(long *)(*unaff_x21 + 0x48);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c(0,uVar4);
                }
                FUN_025d9620(lVar6,uVar4,*(undefined8 *)PTR_DAT_04571910);
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_03cf3b08;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03cf3994:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03cf39c8;
    }
  }
LAB_03cf39ac:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03cf39c8:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
LAB_03cf39d4:
  if ((*in_stack_00000000 != 0) &&
     (plVar9 = *(long **)(*in_stack_00000000 + 0x10), plVar9 != (long *)0x0)) {
    lVar6 = *plVar9;
    lVar7 = *in_stack_00000010;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar8) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
          goto LAB_03cf3a3c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*plVar8,0xd);
LAB_03cf3a3c:
    (*(code *)*puVar5)(plVar9,lVar7,puVar5[1]);
    lVar6 = *in_stack_00000010;
    if (lVar6 != 0) {
      uVar11 = 0;
      do {
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar11) {
          lVar6 = *(long *)(unaff_x29 + 0x50);
          *(undefined8 *)(unaff_x29 + 0x48) = DAT_00c8e838;
          uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                    );
          FUN_02e628e0();
          if (lVar6 != 0) {
            puVar5 = (undefined8 *)(lVar6 + 0x40);
            *puVar5 = uVar4;
            thunk_FUN_01f51358(puVar5,uVar4);
            return *unaff_x21;
          }
          break;
        }
        if (*in_stack_00000000 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar9 = *(long **)(*in_stack_00000000 + 0x10);
        if (plVar9 == (long *)0x0) break;
        lVar7 = *plVar9;
        lVar13 = *unaff_x21;
        uVar4 = *(undefined8 *)(lVar6 + uVar11 * 8 + 0x20);
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar8) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
              goto LAB_03cf3ad8;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*plVar8,0xc);
LAB_03cf3ad8:
        uVar3 = (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
        if (lVar13 == 0) break;
        uVar11 = uVar11 + 1;
        FUN_03cf43b8(lVar13,uVar11 & 0xffffffff,uVar3 & 1);
        lVar6 = *in_stack_00000010;
      } while (lVar6 != 0);
    }
  }
LAB_03cf3b08:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


