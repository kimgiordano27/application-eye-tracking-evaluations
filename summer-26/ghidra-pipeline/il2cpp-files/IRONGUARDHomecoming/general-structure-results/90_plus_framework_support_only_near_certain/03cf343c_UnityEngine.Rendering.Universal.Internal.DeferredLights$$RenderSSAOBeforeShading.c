/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$RenderSSAOBeforeShading
ENTRY_POINT: 03cf343c
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

long UnityEngine_Rendering_Universal_Internal_DeferredLights__RenderSSAOBeforeShading(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar11;
  long unaff_x25;
  long lVar12;
  undefined8 uVar13;
  long unaff_x26;
  long unaff_x27;
  long lVar14;
  long lVar15;
  long unaff_x28;
  undefined8 unaff_x29;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  
  while( true ) {
    *(undefined8 *)(param_1 + 0x48) = unaff_x29;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),unaff_x29);
    if (unaff_x27 == 0) break;
    FUN_025d9620(unaff_x27,unaff_x28,*(undefined8 *)PTR_DAT_04571910);
    lVar14 = *(long *)(unaff_x23 + 0x48);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572840);
    FUN_03cf3d18();
    uVar5 = FUN_040766fc(unaff_x26,0);
    if (lVar4 == 0) break;
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    thunk_FUN_01f51358();
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045726e0);
    FUN_02e631d0(uVar5,unaff_x25,*unaff_x19,0);
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x48),uVar5);
    if (lVar14 == 0) break;
    FUN_025d9620(lVar14,lVar4,*(undefined8 *)PTR_DAT_04571910);
    unaff_x20 = unaff_x20 + 1;
    if ((long)*(int *)(unaff_x24 + 0x18) <= (long)unaff_x20) {
      if (*in_stack_00000008 != 0) {
        lVar12 = *(long *)(*in_stack_00000008 + 0x48);
        lVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
        FUN_03cf29b4();
        puVar1 = PTR_DAT_04572620;
        lVar14 = *(long *)PTR_DAT_04572620;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar14 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_045727d8;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x38);
          thunk_FUN_01f51358();
          lVar14 = *(long *)puVar1;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar14 = *(long *)puVar1;
          }
          lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
          if (lVar15 == 0) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar14 = *(long *)puVar1;
            }
            uVar5 = **(undefined8 **)(lVar14 + 0xb8);
            lVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                       );
            FUN_02e631d0(lVar15,uVar5,*(undefined8 *)PTR_DAT_04572870,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
            *plVar6 = lVar15;
            thunk_FUN_01f51358(plVar6,lVar15);
          }
          *(long *)(lVar4 + 0x48) = lVar15;
          thunk_FUN_01f51358((long *)(lVar4 + 0x48),lVar15);
          if (lVar12 != 0) {
            FUN_025d9620(lVar12,lVar4,*(undefined8 *)PTR_DAT_04571910);
            plVar6 = (long *)PTR_DAT_04572828;
            if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x48), lVar4 != 0)) {
              FUN_025d9620(lVar4,*in_stack_00000008,*(undefined8 *)PTR_DAT_04571910);
              lVar12 = *(long *)(unaff_x23 + 0x48);
              lVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
              FUN_03cf29b4();
              lVar14 = *(long *)puVar1;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar14 = *(long *)puVar1;
              }
              lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x30);
              if (lVar15 == 0) {
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar14 = *(long *)puVar1;
                }
                uVar5 = **(undefined8 **)(lVar14 + 0xb8);
                lVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                           );
                FUN_02e631d0(lVar15,uVar5,*(undefined8 *)PTR_DAT_04572878,0);
                plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
                *plVar6 = lVar15;
                thunk_FUN_01f51358(plVar6,lVar15);
                plVar6 = (long *)PTR_DAT_04572828;
              }
              if (lVar4 != 0) {
                *(long *)(lVar4 + 0x48) = lVar15;
                thunk_FUN_01f51358((long *)(lVar4 + 0x48),lVar15);
                if (lVar12 != 0) {
                  FUN_025d9620(lVar12,lVar4,*(undefined8 *)PTR_DAT_04571910);
                  if ((*unaff_x21 != 0) && (*(long *)(*unaff_x21 + 0x48) != 0)) {
                    FUN_025d9620();
                    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572838);
                    FUN_030f2380(uVar5,*(undefined8 *)PTR_DAT_04572830);
                    puVar11 = (undefined8 *)(in_stack_00000018 + 0x18);
                    *puVar11 = uVar5;
                    thunk_FUN_01f51358(puVar11,uVar5);
                    FUN_03cf3dc0(in_stack_00000018,*(undefined8 *)(in_stack_00000018 + 0x38),0,0);
                    lVar4 = *(long *)puVar1;
                    uVar5 = *puVar11;
                    if (*(int *)(lVar4 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar4 = *(long *)puVar1;
                    }
                    lVar14 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x40);
                    if (lVar14 == 0) {
                      if (*(int *)(lVar4 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar4 = *(long *)puVar1;
                      }
                      uVar13 = **(undefined8 **)(lVar4 + 0xb8);
                      lVar14 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572810);
                      FUN_02e6c748(lVar14,uVar13,*(undefined8 *)PTR_DAT_04572858,0);
                      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
                      *plVar7 = lVar14;
                      thunk_FUN_01f51358(plVar7,lVar14);
                    }
                    plVar7 = (long *)FUN_022fbe3c(uVar5,lVar14,*(undefined8 *)PTR_DAT_04572808);
                    if (plVar7 != (long *)0x0) {
                      lVar4 = *plVar7;
                      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar9 == 0) goto LAB_03cf3848;
                      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      goto LAB_03cf3830;
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    unaff_x25 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572898);
    FUN_035ac8e8(unaff_x25,0);
    if (unaff_x25 == 0) break;
    plVar6 = (long *)(unaff_x25 + 0x18);
    *plVar6 = in_stack_00000018;
    thunk_FUN_01f51358(plVar6,in_stack_00000018);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x20) goto LAB_03cf3b80;
    plVar7 = (long *)(unaff_x25 + 0x10);
    *plVar7 = *(long *)(unaff_x22 + unaff_x20 * 8);
    thunk_FUN_01f51358(plVar7);
    if (*plVar7 == 0) break;
    uVar9 = FUN_03d40c18(*plVar7,0);
    lVar4 = *plVar7;
    if (lVar4 == 0) break;
    if ((uVar9 & 1) == 0) {
      unaff_x26 = *(long *)(lVar4 + 0x30);
    }
    else {
      unaff_x26 = FUN_03d408a8(lVar4,0);
    }
    if ((*plVar6 == 0) || (lVar4 = *(long *)(*plVar6 + 0x20), lVar4 == 0)) break;
    unaff_x27 = *(long *)(lVar4 + 0x48);
    param_1 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
    FUN_03cf29b4();
    if ((unaff_x26 == 0) || (uVar5 = FUN_040766fc(unaff_x26,0), param_1 == 0)) break;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_01f51358();
    unaff_x29 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__)
    ;
    FUN_02e631d0(unaff_x29,unaff_x25,*(undefined8 *)PTR_DAT_04572888,0);
    unaff_x28 = param_1;
  }
  goto LAB_03cf3b08;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03cf3830:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04572818) {
      puVar11 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03cf3864;
    }
  }
LAB_03cf3848:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_04572818,0);
LAB_03cf3864:
  plVar7 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
  puVar2 = PTR_DAT_04572820;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cf38d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03cf38d4:
    uVar9 = (*(code *)*puVar11)(plVar7,puVar11[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03cf39d4;
      lVar4 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 == 0) goto LAB_03cf39ac;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cf3930;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03cf3930:
    uVar5 = (*(code *)*puVar11)(plVar7,puVar11[1]);
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar5,uVar5);
    }
    lVar4 = *(long *)(*unaff_x21 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,uVar5);
    }
    FUN_025d9620(lVar4,uVar5,*(undefined8 *)PTR_DAT_04571910);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03cf39c8;
    }
  }
LAB_03cf39ac:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar7,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03cf39c8:
  (*(code *)*puVar11)(plVar7,puVar11[1]);
LAB_03cf39d4:
  if ((*in_stack_00000000 != 0) &&
     (plVar7 = *(long **)(*in_stack_00000000 + 0x10), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    lVar14 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar6) {
          puVar11 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
          goto LAB_03cf3a3c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*plVar6,0xd);
LAB_03cf3a3c:
    (*(code *)*puVar11)(plVar7,lVar14,puVar11[1]);
    lVar4 = *in_stack_00000010;
    if (lVar4 != 0) {
      uVar9 = 0;
      do {
        if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar9) {
          lVar4 = *(long *)(in_stack_00000018 + 0x50);
          *(undefined8 *)(in_stack_00000018 + 0x48) = DAT_00c8e838;
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                    );
          FUN_02e628e0(uVar5,in_stack_00000018,*(undefined8 *)PTR_DAT_04572880,0);
          if (lVar4 != 0) {
            puVar11 = (undefined8 *)(lVar4 + 0x40);
            *puVar11 = uVar5;
            thunk_FUN_01f51358(puVar11,uVar5);
            return *unaff_x21;
          }
          break;
        }
        if (*in_stack_00000000 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_03cf3b80:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar7 = *(long **)(*in_stack_00000000 + 0x10);
        if (plVar7 == (long *)0x0) break;
        lVar14 = *plVar7;
        lVar12 = *unaff_x21;
        uVar5 = *(undefined8 *)(lVar4 + uVar9 * 8 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *plVar6) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
              goto LAB_03cf3ad8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*plVar6,0xc);
LAB_03cf3ad8:
        uVar3 = (*(code *)*puVar11)(plVar7,uVar5,puVar11[1]);
        if (lVar12 == 0) break;
        uVar9 = uVar9 + 1;
        FUN_03cf43b8(lVar12,uVar9 & 0xffffffff,uVar3 & 1);
        lVar4 = *in_stack_00000010;
      } while (lVar4 != 0);
    }
  }
LAB_03cf3b08:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


