/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$SetupMatrixConstants
ENTRY_POINT: 03cf3048
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

long UnityEngine_Rendering_Universal_Internal_DeferredLights__SetupMatrixConstants
               (long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long in_x10;
  int *piVar11;
  uint in_w11;
  long *unaff_x20;
  ulong uVar12;
  long *unaff_x21;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *unaff_x26;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x29;
  long *in_stack_00000010;
  
  bVar1 = *(byte *)(param_3 + 0x130);
  if ((bVar1 <= in_w11) && (*(long *)(*(long *)(in_x10 + 200) + ((ulong)bVar1 - 1) * 8) == param_3))
  {
    *(undefined8 *)(unaff_x29 + 0x40) = param_1;
    if (((uint)bVar1 <= (uint)*(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) == param_3)) {
      thunk_FUN_01f51358((undefined8 *)(unaff_x29 + 0x40),param_1);
      puVar2 = PTR_DAT_04572848;
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572848);
      FUN_03cf3cbc();
      lVar6 = *unaff_x26;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *unaff_x26;
      }
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28);
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
        *(undefined1 *)(lVar5 + 0x50) = 1;
        lVar13 = *(long *)(lVar5 + 0x48);
        lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
        FUN_03cf29b4();
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x30);
          thunk_FUN_01f51358();
          puVar3 = PTR_DAT_045727d8;
          lVar7 = *(long *)PTR_DAT_045727d8;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar7 = *(long *)puVar3;
          }
          lVar16 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
          if (lVar16 == 0) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar7 = *(long *)PTR_DAT_045727d8;
            }
            puVar3 = PTR_DAT_045727d8;
            uVar18 = **(undefined8 **)(lVar7 + 0xb8);
            lVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                       );
            FUN_02e631d0(lVar16,uVar18,*(undefined8 *)PTR_DAT_04572860,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            *plVar8 = lVar16;
            thunk_FUN_01f51358(plVar8,lVar16);
          }
          *(long *)(lVar6 + 0x48) = lVar16;
          thunk_FUN_01f51358((long *)(lVar6 + 0x48),lVar16);
          if (lVar13 != 0) {
            FUN_025d9620(lVar13,lVar6,*(undefined8 *)PTR_DAT_04571910);
            plVar8 = (long *)(unaff_x29 + 0x20);
            *plVar8 = lVar5;
            thunk_FUN_01f51358(plVar8,lVar5);
            lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
            FUN_03cf3cbc();
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_045728a8;
              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
              lVar7 = *(long *)(lVar5 + 0x48);
              lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
              FUN_03cf29b4();
              puVar2 = PTR_DAT_045727d8;
              lVar13 = *(long *)PTR_DAT_045727d8;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar13 = *(long *)puVar2;
              }
              lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
              if (lVar16 == 0) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar13 = *(long *)puVar2;
                }
                uVar18 = **(undefined8 **)(lVar13 + 0xb8);
                lVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                           );
                FUN_02e631d0(lVar16,uVar18,*(undefined8 *)PTR_DAT_04572868,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
                *plVar9 = lVar16;
                thunk_FUN_01f51358(plVar9,lVar16);
              }
              if (lVar6 != 0) {
                *(long *)(lVar6 + 0x48) = lVar16;
                thunk_FUN_01f51358((long *)(lVar6 + 0x48),lVar16);
                if (lVar7 != 0) {
                  FUN_025d9620(lVar7,lVar6,*(undefined8 *)PTR_DAT_04571910);
                  puVar2 = PTR_DAT_04572890;
                  lVar6 = *in_stack_00000010;
                  if (lVar6 != 0) {
                    if (0 < *(int *)(lVar6 + 0x18)) {
                      uVar12 = 0;
                      do {
                        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572898);
                        FUN_035ac8e8(lVar13,0);
                        if (lVar13 == 0) goto LAB_03cf3b08;
                        plVar9 = (long *)(lVar13 + 0x18);
                        *plVar9 = unaff_x29;
                        thunk_FUN_01f51358(plVar9,unaff_x29);
                        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_03cf3b80;
                        plVar17 = (long *)(lVar13 + 0x10);
                        *plVar17 = *(long *)(lVar6 + 0x20 + uVar12 * 8);
                        thunk_FUN_01f51358(plVar17);
                        if (*plVar17 == 0) goto LAB_03cf3b08;
                        uVar10 = FUN_03d40c18(*plVar17,0);
                        lVar7 = *plVar17;
                        if (lVar7 == 0) goto LAB_03cf3b08;
                        if ((uVar10 & 1) == 0) {
                          lVar7 = *(long *)(lVar7 + 0x30);
                        }
                        else {
                          lVar7 = FUN_03d408a8(lVar7,0);
                        }
                        if ((*plVar9 == 0) || (lVar16 = *(long *)(*plVar9 + 0x20), lVar16 == 0))
                        goto LAB_03cf3b08;
                        lVar19 = *(long *)(lVar16 + 0x48);
                        lVar16 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                        FUN_03cf29b4();
                        if ((lVar7 == 0) || (uVar18 = FUN_040766fc(lVar7,0), lVar16 == 0))
                        goto LAB_03cf3b08;
                        *(undefined8 *)(lVar16 + 0x28) = uVar18;
                        thunk_FUN_01f51358();
                        uVar18 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                          
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                        FUN_02e631d0(uVar18,lVar13,*(undefined8 *)PTR_DAT_04572888,0);
                        *(undefined8 *)(lVar16 + 0x48) = uVar18;
                        thunk_FUN_01f51358((undefined8 *)(lVar16 + 0x48),uVar18);
                        if (lVar19 == 0) goto LAB_03cf3b08;
                        FUN_025d9620(lVar19,lVar16,*(undefined8 *)PTR_DAT_04571910);
                        lVar19 = *(long *)(lVar5 + 0x48);
                        lVar16 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572840);
                        FUN_03cf3d18();
                        uVar18 = FUN_040766fc(lVar7,0);
                        if (lVar16 == 0) goto LAB_03cf3b08;
                        *(undefined8 *)(lVar16 + 0x28) = uVar18;
                        thunk_FUN_01f51358();
                        uVar18 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045726e0);
                        FUN_02e631d0(uVar18,lVar13,*(undefined8 *)puVar2,0);
                        *(undefined8 *)(lVar16 + 0x48) = uVar18;
                        thunk_FUN_01f51358((undefined8 *)(lVar16 + 0x48),uVar18);
                        if (lVar19 == 0) goto LAB_03cf3b08;
                        FUN_025d9620(lVar19,lVar16,*(undefined8 *)PTR_DAT_04571910);
                        uVar12 = uVar12 + 1;
                      } while ((long)uVar12 < (long)*(int *)(lVar6 + 0x18));
                    }
                    if (*plVar8 != 0) {
                      lVar7 = *(long *)(*plVar8 + 0x48);
                      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                      FUN_03cf29b4();
                      puVar2 = PTR_DAT_04572620;
                      lVar13 = *(long *)PTR_DAT_04572620;
                      if (*(int *)(lVar13 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar13 = *(long *)puVar2;
                      }
                      puVar2 = PTR_DAT_045727d8;
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 0x28) =
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x38);
                        thunk_FUN_01f51358();
                        lVar13 = *(long *)puVar2;
                        if (*(int *)(lVar13 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar13 = *(long *)puVar2;
                        }
                        lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
                        if (lVar16 == 0) {
                          if (*(int *)(lVar13 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar13 = *(long *)puVar2;
                          }
                          uVar18 = **(undefined8 **)(lVar13 + 0xb8);
                          lVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                              
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                          FUN_02e631d0(lVar16,uVar18,*(undefined8 *)PTR_DAT_04572870,0);
                          plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
                          *plVar9 = lVar16;
                          thunk_FUN_01f51358(plVar9,lVar16);
                        }
                        *(long *)(lVar6 + 0x48) = lVar16;
                        thunk_FUN_01f51358((long *)(lVar6 + 0x48),lVar16);
                        if (lVar7 != 0) {
                          FUN_025d9620(lVar7,lVar6,*(undefined8 *)PTR_DAT_04571910);
                          plVar9 = (long *)PTR_DAT_04572828;
                          if ((*unaff_x21 != 0) &&
                             (lVar6 = *(long *)(*unaff_x21 + 0x48), lVar6 != 0)) {
                            FUN_025d9620(lVar6,*plVar8,*(undefined8 *)PTR_DAT_04571910);
                            lVar7 = *(long *)(lVar5 + 0x48);
                            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                            FUN_03cf29b4();
                            lVar13 = *(long *)puVar2;
                            if (*(int *)(lVar13 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar13 = *(long *)puVar2;
                            }
                            lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
                            if (lVar16 == 0) {
                              if (*(int *)(lVar13 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar13 = *(long *)puVar2;
                              }
                              uVar18 = **(undefined8 **)(lVar13 + 0xb8);
                              lVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                      
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                              FUN_02e631d0(lVar16,uVar18,*(undefined8 *)PTR_DAT_04572878,0);
                              plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
                              *plVar8 = lVar16;
                              thunk_FUN_01f51358(plVar8,lVar16);
                              plVar9 = (long *)PTR_DAT_04572828;
                            }
                            if (lVar6 != 0) {
                              *(long *)(lVar6 + 0x48) = lVar16;
                              thunk_FUN_01f51358((long *)(lVar6 + 0x48),lVar16);
                              if (lVar7 != 0) {
                                FUN_025d9620(lVar7,lVar6,*(undefined8 *)PTR_DAT_04571910);
                                if ((*unaff_x21 != 0) &&
                                   (lVar6 = *(long *)(*unaff_x21 + 0x48), lVar6 != 0)) {
                                  FUN_025d9620(lVar6,lVar5,*(undefined8 *)PTR_DAT_04571910);
                                  uVar18 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572838);
                                  FUN_030f2380(uVar18,*(undefined8 *)PTR_DAT_04572830);
                                  puVar14 = (undefined8 *)(unaff_x29 + 0x18);
                                  *puVar14 = uVar18;
                                  thunk_FUN_01f51358(puVar14,uVar18);
                                  FUN_03cf3dc0(unaff_x29,*(undefined8 *)(unaff_x29 + 0x38),0,0);
                                  lVar5 = *(long *)puVar2;
                                  uVar18 = *puVar14;
                                  if (*(int *)(lVar5 + 0xe0) == 0) {
                                    thunk_FUN_01ee6d7c();
                                    lVar5 = *(long *)puVar2;
                                  }
                                  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
                                  if (lVar6 == 0) {
                                    if (*(int *)(lVar5 + 0xe0) == 0) {
                                      thunk_FUN_01ee6d7c();
                                      lVar5 = *(long *)puVar2;
                                    }
                                    uVar15 = **(undefined8 **)(lVar5 + 0xb8);
                                    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572810);
                                    FUN_02e6c748(lVar6,uVar15,*(undefined8 *)PTR_DAT_04572858,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
                                    *plVar8 = lVar6;
                                    thunk_FUN_01f51358(plVar8,lVar6);
                                  }
                                  plVar8 = (long *)FUN_022fbe3c(uVar18,lVar6,
                                                                *(undefined8 *)PTR_DAT_04572808);
                                  if (plVar8 != (long *)0x0) {
                                    lVar5 = *plVar8;
                                    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                    if (uVar12 != 0) {
                                      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04572818) {
                                          puVar14 = (undefined8 *)
                                                    (lVar5 + (long)*piVar11 * 0x10 + 0x138);
                                          goto LAB_03cf3864;
                                        }
                                        uVar12 = uVar12 - 1;
                                        piVar11 = piVar11 + 4;
                                      } while (uVar12 != 0);
                                    }
                                    puVar14 = (undefined8 *)
                                              FUN_01ecb238(plVar8,*(long *)PTR_DAT_04572818,0);
LAB_03cf3864:
                                    plVar8 = (long *)(*(code *)*puVar14)(plVar8,puVar14[1]);
                                    puVar3 = PTR_DAT_04572820;
                                    puVar2 = 
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                    ;
                                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08a3c();
                                    }
                                    do {
                                      lVar5 = *plVar8;
                                      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                      if (uVar12 != 0) {
                                        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                                            puVar14 = (undefined8 *)
                                                      (lVar5 + (long)*piVar11 * 0x10 + 0x138);
                                            goto LAB_03cf38d4;
                                          }
                                          uVar12 = uVar12 - 1;
                                          piVar11 = piVar11 + 4;
                                        } while (uVar12 != 0);
                                      }
                                      puVar14 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0)
                                      ;
LAB_03cf38d4:
                                      uVar12 = (*(code *)*puVar14)(plVar8,puVar14[1]);
                                      if ((uVar12 & 1) == 0) {
                                        if (plVar8 == (long *)0x0) goto LAB_03cf39d4;
                                        lVar5 = *plVar8;
                                        uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                        if (uVar12 == 0) goto LAB_03cf39ac;
                                        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                        goto LAB_03cf3994;
                                      }
                                      lVar5 = *plVar8;
                                      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                      if (uVar12 != 0) {
                                        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                                            puVar14 = (undefined8 *)
                                                      (lVar5 + (long)*piVar11 * 0x10 + 0x138);
                                            goto LAB_03cf3930;
                                          }
                                          uVar12 = uVar12 - 1;
                                          piVar11 = piVar11 + 4;
                                        } while (uVar12 != 0);
                                      }
                                      puVar14 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0)
                                      ;
LAB_03cf3930:
                                      uVar18 = (*(code *)*puVar14)(plVar8,puVar14[1]);
                                      if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_01f08a3c(uVar18,uVar18);
                                      }
                                      lVar5 = *(long *)(*unaff_x21 + 0x48);
                                      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_01f08a3c(0,uVar18);
                                      }
                                      FUN_025d9620(lVar5,uVar18,*(undefined8 *)PTR_DAT_04571910);
                                    } while( true );
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03cf3b08;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc(param_1);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar11 = piVar11 + 4;
    if (uVar12 == 0) break;
LAB_03cf3994:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar14 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03cf39c8;
    }
  }
LAB_03cf39ac:
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar8,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03cf39c8:
  (*(code *)*puVar14)(plVar8,puVar14[1]);
LAB_03cf39d4:
  if ((*unaff_x20 != 0) && (plVar8 = *(long **)(*unaff_x20 + 0x10), plVar8 != (long *)0x0)) {
    lVar5 = *plVar8;
    lVar6 = *in_stack_00000010;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar9) {
          puVar14 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
          goto LAB_03cf3a3c;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar8,*plVar9,0xd);
LAB_03cf3a3c:
    (*(code *)*puVar14)(plVar8,lVar6,puVar14[1]);
    lVar5 = *in_stack_00000010;
    if (lVar5 != 0) {
      uVar12 = 0;
      do {
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar12) {
          lVar5 = *(long *)(unaff_x29 + 0x50);
          *(undefined8 *)(unaff_x29 + 0x48) = DAT_00c8e838;
          uVar18 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                     );
          FUN_02e628e0(uVar18,unaff_x29,*(undefined8 *)PTR_DAT_04572880,0);
          if (lVar5 != 0) {
            puVar14 = (undefined8 *)(lVar5 + 0x40);
            *puVar14 = uVar18;
            thunk_FUN_01f51358(puVar14,uVar18);
            return *unaff_x21;
          }
          break;
        }
        if (*unaff_x20 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) {
LAB_03cf3b80:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar8 = *(long **)(*unaff_x20 + 0x10);
        if (plVar8 == (long *)0x0) break;
        lVar6 = *plVar8;
        lVar13 = *unaff_x21;
        uVar18 = *(undefined8 *)(lVar5 + uVar12 * 8 + 0x20);
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *plVar9) {
              puVar14 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
              goto LAB_03cf3ad8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar8,*plVar9,0xc);
LAB_03cf3ad8:
        uVar4 = (*(code *)*puVar14)(plVar8,uVar18,puVar14[1]);
        if (lVar13 == 0) break;
        uVar12 = uVar12 + 1;
        FUN_03cf43b8(lVar13,uVar12 & 0xffffffff,uVar4 & 1);
        lVar5 = *in_stack_00000010;
      } while (lVar5 != 0);
    }
  }
LAB_03cf3b08:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


