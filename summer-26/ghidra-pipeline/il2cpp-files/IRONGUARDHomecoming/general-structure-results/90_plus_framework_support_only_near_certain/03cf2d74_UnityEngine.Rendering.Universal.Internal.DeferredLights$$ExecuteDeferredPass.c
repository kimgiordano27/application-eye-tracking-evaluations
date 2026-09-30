/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$ExecuteDeferredPass
ENTRY_POINT: 03cf2d74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03cf3b90) */

long UnityEngine_Rendering_Universal_Internal_DeferredLights__ExecuteDeferredPass(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  long unaff_x21;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long unaff_x29;
  
  FUN_035ac8e8();
  puVar2 = PTR_DAT_04572850;
  puVar3 = PTR_DAT_04572620;
  if (unaff_x29 != 0) {
    plVar16 = (long *)(unaff_x29 + 0x10);
    *plVar16 = unaff_x21;
    thunk_FUN_01f51358(plVar16);
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_03cf3c68();
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar3;
    }
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      thunk_FUN_01f51358();
      *(undefined1 *)(lVar6 + 0x50) = 1;
      plVar17 = (long *)(unaff_x29 + 0x50);
      *plVar17 = lVar6;
      thunk_FUN_01f51358(plVar17,lVar6);
      puVar4 = PTR_DAT_04572828;
      puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if ((*(long *)(unaff_x29 + 0x10) != 0) &&
         (plVar18 = *(long **)(*(long *)(unaff_x29 + 0x10) + 0x10), plVar18 != (long *)0x0)) {
        lVar6 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04572828) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 9) * 0x10 + 0x138);
              goto LAB_03cf2e68;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar18,*(long *)PTR_DAT_04572828,9);
LAB_03cf2e68:
        uVar9 = (*(code *)*puVar8)(plVar18,puVar8[1]);
        puVar8 = (undefined8 *)(unaff_x29 + 0x38);
        *puVar8 = uVar9;
        thunk_FUN_01f51358(puVar8,uVar9);
        uVar9 = *puVar8;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03582560(uVar9,0,0);
        if ((uVar13 & 1) != 0) {
LAB_03cf3b5c:
          return *plVar17;
        }
        if ((*plVar16 == 0) || (plVar18 = *(long **)(*plVar16 + 0x10), plVar18 == (long *)0x0))
        goto LAB_03cf3b08;
        lVar7 = *plVar18;
        lVar6 = *(long *)puVar4;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_03cf2f10;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar18,lVar6,6);
LAB_03cf2f10:
        lVar6 = (*(code *)*puVar8)(plVar18,puVar8[1]);
        if (lVar6 == 0) {
          if (*(int *)(*(long *)Method_System_Linq_Enumerable_Cast<MemberInfo>__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar6 = FUN_03d40d1c(0);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_03cf3b08;
        }
        uVar9 = FUN_03d43f28(lVar6,*(undefined8 *)(unaff_x29 + 0x38),0);
        puVar8 = (undefined8 *)(unaff_x29 + 0x28);
        *puVar8 = uVar9;
        thunk_FUN_01f51358(puVar8,uVar9);
        uVar9 = *puVar8;
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (uVar9,0,0);
        if ((uVar13 & 1) != 0) goto LAB_03cf3b5c;
        if ((*plVar16 == 0) || (plVar18 = *(long **)(*plVar16 + 0x10), plVar18 == (long *)0x0))
        goto LAB_03cf3b08;
        lVar7 = *plVar18;
        lVar6 = *(long *)puVar4;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
              goto LAB_03cf2ffc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar18,lVar6,0xb);
LAB_03cf2ffc:
        lVar6 = (*(code *)*puVar8)(plVar18,puVar8[1]);
        plVar15 = (long *)(unaff_x29 + 0x30);
        *plVar15 = lVar6;
        thunk_FUN_01f51358(plVar15,lVar6);
        plVar18 = (long *)FUN_04074968(*(undefined8 *)(unaff_x29 + 0x38),0);
        if (plVar18 == (long *)0x0) {
          *(undefined8 *)(unaff_x29 + 0x40) = 0;
        }
        else {
          lVar6 = *(long *)PTR_DAT_045728a0;
          bVar1 = *(byte *)(lVar6 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) {
LAB_03cf3090:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar18);
          }
          *(long **)(unaff_x29 + 0x40) = plVar18;
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6))
          goto LAB_03cf3090;
        }
        thunk_FUN_01f51358(unaff_x29 + 0x40,plVar18);
        puVar2 = PTR_DAT_04572848;
        lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572848);
        FUN_03cf3cbc();
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar3;
        }
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28);
          thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
          *(undefined1 *)(lVar6 + 0x50) = 1;
          lVar19 = *(long *)(lVar6 + 0x48);
          lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
          FUN_03cf29b4();
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x28) =
                 *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
            thunk_FUN_01f51358();
            puVar3 = PTR_DAT_045727d8;
            lVar10 = *(long *)PTR_DAT_045727d8;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar10 = *(long *)puVar3;
            }
            lVar21 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
            if (lVar21 == 0) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar10 = *(long *)PTR_DAT_045727d8;
              }
              puVar3 = PTR_DAT_045727d8;
              uVar9 = **(undefined8 **)(lVar10 + 0xb8);
              lVar21 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                         );
              FUN_02e631d0(lVar21,uVar9,*(undefined8 *)PTR_DAT_04572860,0);
              plVar18 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
              *plVar18 = lVar21;
              thunk_FUN_01f51358(plVar18,lVar21);
            }
            *(long *)(lVar7 + 0x48) = lVar21;
            thunk_FUN_01f51358((long *)(lVar7 + 0x48),lVar21);
            if (lVar19 != 0) {
              FUN_025d9620(lVar19,lVar7,*(undefined8 *)PTR_DAT_04571910);
              plVar18 = (long *)(unaff_x29 + 0x20);
              *plVar18 = lVar6;
              thunk_FUN_01f51358(plVar18,lVar6);
              lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
              FUN_03cf3cbc();
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_045728a8;
                thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
                lVar10 = *(long *)(lVar6 + 0x48);
                lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                FUN_03cf29b4();
                puVar3 = PTR_DAT_045727d8;
                lVar19 = *(long *)PTR_DAT_045727d8;
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar19 = *(long *)puVar3;
                }
                lVar21 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x20);
                if (lVar21 == 0) {
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar19 = *(long *)puVar3;
                  }
                  uVar9 = **(undefined8 **)(lVar19 + 0xb8);
                  lVar21 = thunk_FUN_01f117cc(*(undefined8 *)
                                               Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                             );
                  FUN_02e631d0(lVar21,uVar9,*(undefined8 *)PTR_DAT_04572868,0);
                  plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                  *plVar11 = lVar21;
                  thunk_FUN_01f51358(plVar11,lVar21);
                }
                if (lVar7 != 0) {
                  *(long *)(lVar7 + 0x48) = lVar21;
                  thunk_FUN_01f51358((long *)(lVar7 + 0x48),lVar21);
                  if (lVar10 != 0) {
                    FUN_025d9620(lVar10,lVar7,*(undefined8 *)PTR_DAT_04571910);
                    puVar3 = PTR_DAT_04572890;
                    lVar7 = *plVar15;
                    if (lVar7 != 0) {
                      if (0 < *(int *)(lVar7 + 0x18)) {
                        uVar13 = 0;
                        do {
                          lVar19 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572898);
                          FUN_035ac8e8(lVar19,0);
                          if (lVar19 == 0) goto LAB_03cf3b08;
                          plVar11 = (long *)(lVar19 + 0x18);
                          *plVar11 = unaff_x29;
                          thunk_FUN_01f51358(plVar11,unaff_x29);
                          if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_03cf3b80;
                          plVar22 = (long *)(lVar19 + 0x10);
                          *plVar22 = *(long *)(lVar7 + 0x20 + uVar13 * 8);
                          thunk_FUN_01f51358(plVar22);
                          if (*plVar22 == 0) goto LAB_03cf3b08;
                          uVar12 = FUN_03d40c18(*plVar22,0);
                          lVar10 = *plVar22;
                          if (lVar10 == 0) goto LAB_03cf3b08;
                          if ((uVar12 & 1) == 0) {
                            lVar10 = *(long *)(lVar10 + 0x30);
                          }
                          else {
                            lVar10 = FUN_03d408a8(lVar10,0);
                          }
                          if ((*plVar11 == 0) || (lVar21 = *(long *)(*plVar11 + 0x20), lVar21 == 0))
                          goto LAB_03cf3b08;
                          lVar23 = *(long *)(lVar21 + 0x48);
                          lVar21 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                          FUN_03cf29b4();
                          if ((lVar10 == 0) || (uVar9 = FUN_040766fc(lVar10,0), lVar21 == 0))
                          goto LAB_03cf3b08;
                          *(undefined8 *)(lVar21 + 0x28) = uVar9;
                          thunk_FUN_01f51358();
                          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                            
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                          FUN_02e631d0(uVar9,lVar19,*(undefined8 *)PTR_DAT_04572888,0);
                          *(undefined8 *)(lVar21 + 0x48) = uVar9;
                          thunk_FUN_01f51358((undefined8 *)(lVar21 + 0x48),uVar9);
                          if (lVar23 == 0) goto LAB_03cf3b08;
                          FUN_025d9620(lVar23,lVar21,*(undefined8 *)PTR_DAT_04571910);
                          lVar23 = *(long *)(lVar6 + 0x48);
                          lVar21 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572840);
                          FUN_03cf3d18();
                          uVar9 = FUN_040766fc(lVar10,0);
                          if (lVar21 == 0) goto LAB_03cf3b08;
                          *(undefined8 *)(lVar21 + 0x28) = uVar9;
                          thunk_FUN_01f51358();
                          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045726e0);
                          FUN_02e631d0(uVar9,lVar19,*(undefined8 *)puVar3,0);
                          *(undefined8 *)(lVar21 + 0x48) = uVar9;
                          thunk_FUN_01f51358((undefined8 *)(lVar21 + 0x48),uVar9);
                          if (lVar23 == 0) goto LAB_03cf3b08;
                          FUN_025d9620(lVar23,lVar21,*(undefined8 *)PTR_DAT_04571910);
                          uVar13 = uVar13 + 1;
                        } while ((long)uVar13 < (long)*(int *)(lVar7 + 0x18));
                      }
                      if (*plVar18 != 0) {
                        lVar10 = *(long *)(*plVar18 + 0x48);
                        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                        FUN_03cf29b4();
                        puVar3 = PTR_DAT_04572620;
                        lVar19 = *(long *)PTR_DAT_04572620;
                        if (*(int *)(lVar19 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar19 = *(long *)puVar3;
                        }
                        puVar3 = PTR_DAT_045727d8;
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x28) =
                               *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x38);
                          thunk_FUN_01f51358();
                          lVar19 = *(long *)puVar3;
                          if (*(int *)(lVar19 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar19 = *(long *)puVar3;
                          }
                          lVar21 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x28);
                          if (lVar21 == 0) {
                            if (*(int *)(lVar19 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar19 = *(long *)puVar3;
                            }
                            uVar9 = **(undefined8 **)(lVar19 + 0xb8);
                            lVar21 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                  
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                            FUN_02e631d0(lVar21,uVar9,*(undefined8 *)PTR_DAT_04572870,0);
                            plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
                            *plVar11 = lVar21;
                            thunk_FUN_01f51358(plVar11,lVar21);
                          }
                          *(long *)(lVar7 + 0x48) = lVar21;
                          thunk_FUN_01f51358((long *)(lVar7 + 0x48),lVar21);
                          if (lVar10 != 0) {
                            FUN_025d9620(lVar10,lVar7,*(undefined8 *)PTR_DAT_04571910);
                            plVar11 = (long *)PTR_DAT_04572828;
                            if ((*plVar17 != 0) && (lVar7 = *(long *)(*plVar17 + 0x48), lVar7 != 0))
                            {
                              FUN_025d9620(lVar7,*plVar18,*(undefined8 *)PTR_DAT_04571910);
                              lVar10 = *(long *)(lVar6 + 0x48);
                              lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                              FUN_03cf29b4();
                              lVar19 = *(long *)puVar3;
                              if (*(int *)(lVar19 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar19 = *(long *)puVar3;
                              }
                              lVar21 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x30);
                              if (lVar21 == 0) {
                                if (*(int *)(lVar19 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                  lVar19 = *(long *)puVar3;
                                }
                                uVar9 = **(undefined8 **)(lVar19 + 0xb8);
                                lVar21 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                          
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                                FUN_02e631d0(lVar21,uVar9,*(undefined8 *)PTR_DAT_04572878,0);
                                plVar18 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
                                *plVar18 = lVar21;
                                thunk_FUN_01f51358(plVar18,lVar21);
                                plVar11 = (long *)PTR_DAT_04572828;
                              }
                              if (lVar7 != 0) {
                                *(long *)(lVar7 + 0x48) = lVar21;
                                thunk_FUN_01f51358((long *)(lVar7 + 0x48),lVar21);
                                if (lVar10 != 0) {
                                  FUN_025d9620(lVar10,lVar7,*(undefined8 *)PTR_DAT_04571910);
                                  if ((*plVar17 != 0) &&
                                     (lVar7 = *(long *)(*plVar17 + 0x48), lVar7 != 0)) {
                                    FUN_025d9620(lVar7,lVar6,*(undefined8 *)PTR_DAT_04571910);
                                    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572838);
                                    FUN_030f2380(uVar9,*(undefined8 *)PTR_DAT_04572830);
                                    puVar8 = (undefined8 *)(unaff_x29 + 0x18);
                                    *puVar8 = uVar9;
                                    thunk_FUN_01f51358(puVar8,uVar9);
                                    FUN_03cf3dc0(unaff_x29,*(undefined8 *)(unaff_x29 + 0x38),0,0);
                                    lVar6 = *(long *)puVar3;
                                    uVar9 = *puVar8;
                                    if (*(int *)(lVar6 + 0xe0) == 0) {
                                      thunk_FUN_01ee6d7c();
                                      lVar6 = *(long *)puVar3;
                                    }
                                    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
                                    if (lVar7 == 0) {
                                      if (*(int *)(lVar6 + 0xe0) == 0) {
                                        thunk_FUN_01ee6d7c();
                                        lVar6 = *(long *)puVar3;
                                      }
                                      uVar20 = **(undefined8 **)(lVar6 + 0xb8);
                                      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572810);
                                      FUN_02e6c748(lVar7,uVar20,*(undefined8 *)PTR_DAT_04572858,0);
                                      plVar18 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
                                      *plVar18 = lVar7;
                                      thunk_FUN_01f51358(plVar18,lVar7);
                                    }
                                    plVar18 = (long *)FUN_022fbe3c(uVar9,lVar7,
                                                                   *(undefined8 *)PTR_DAT_04572808);
                                    if (plVar18 != (long *)0x0) {
                                      lVar6 = *plVar18;
                                      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                      if (uVar13 != 0) {
                                        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04572818)
                                          {
                                            puVar8 = (undefined8 *)
                                                     (lVar6 + (long)*piVar14 * 0x10 + 0x138);
                                            goto LAB_03cf3864;
                                          }
                                          uVar13 = uVar13 - 1;
                                          piVar14 = piVar14 + 4;
                                        } while (uVar13 != 0);
                                      }
                                      puVar8 = (undefined8 *)
                                               FUN_01ecb238(plVar18,*(long *)PTR_DAT_04572818,0);
LAB_03cf3864:
                                      plVar18 = (long *)(*(code *)*puVar8)(plVar18,puVar8[1]);
                                      puVar2 = PTR_DAT_04572820;
                                      puVar3 = 
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                      ;
                                      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_01f08a3c();
                                      }
                                      do {
                                        lVar6 = *plVar18;
                                        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                        if (uVar13 != 0) {
                                          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                                              puVar8 = (undefined8 *)
                                                       (lVar6 + (long)*piVar14 * 0x10 + 0x138);
                                              goto LAB_03cf38d4;
                                            }
                                            uVar13 = uVar13 - 1;
                                            piVar14 = piVar14 + 4;
                                          } while (uVar13 != 0);
                                        }
                                        puVar8 = (undefined8 *)
                                                 FUN_01ecb238(plVar18,*(long *)puVar3,0);
LAB_03cf38d4:
                                        uVar13 = (*(code *)*puVar8)(plVar18,puVar8[1]);
                                        if ((uVar13 & 1) == 0) {
                                          if (plVar18 == (long *)0x0) goto LAB_03cf39d4;
                                          lVar6 = *plVar18;
                                          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                          if (uVar13 == 0) goto LAB_03cf39ac;
                                          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                          goto LAB_03cf3994;
                                        }
                                        lVar6 = *plVar18;
                                        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                        if (uVar13 != 0) {
                                          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                                              puVar8 = (undefined8 *)
                                                       (lVar6 + (long)*piVar14 * 0x10 + 0x138);
                                              goto LAB_03cf3930;
                                            }
                                            uVar13 = uVar13 - 1;
                                            piVar14 = piVar14 + 4;
                                          } while (uVar13 != 0);
                                        }
                                        puVar8 = (undefined8 *)
                                                 FUN_01ecb238(plVar18,*(long *)puVar2,0);
LAB_03cf3930:
                                        uVar9 = (*(code *)*puVar8)(plVar18,puVar8[1]);
                                        if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01f08a3c(uVar9,uVar9);
                                        }
                                        lVar6 = *(long *)(*plVar17 + 0x48);
                                        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01f08a3c(0,uVar9);
                                        }
                                        FUN_025d9620(lVar6,uVar9,*(undefined8 *)PTR_DAT_04571910);
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
      }
    }
  }
  goto LAB_03cf3b08;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03cf3994:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03cf39c8;
    }
  }
LAB_03cf39ac:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar18,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03cf39c8:
  (*(code *)*puVar8)(plVar18,puVar8[1]);
LAB_03cf39d4:
  if ((*plVar16 != 0) && (plVar18 = *(long **)(*plVar16 + 0x10), plVar18 != (long *)0x0)) {
    lVar6 = *plVar18;
    lVar7 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *plVar11) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
          goto LAB_03cf3a3c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar18,*plVar11,0xd);
LAB_03cf3a3c:
    (*(code *)*puVar8)(plVar18,lVar7,puVar8[1]);
    lVar6 = *plVar15;
    if (lVar6 != 0) {
      uVar13 = 0;
      do {
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar13) {
          lVar6 = *(long *)(unaff_x29 + 0x50);
          *(undefined8 *)(unaff_x29 + 0x48) = DAT_00c8e838;
          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                    );
          FUN_02e628e0(uVar9,unaff_x29,*(undefined8 *)PTR_DAT_04572880,0);
          if (lVar6 != 0) {
            puVar8 = (undefined8 *)(lVar6 + 0x40);
            *puVar8 = uVar9;
            thunk_FUN_01f51358(puVar8,uVar9);
            goto LAB_03cf3b5c;
          }
          break;
        }
        if (*plVar16 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar13) {
LAB_03cf3b80:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar18 = *(long **)(*plVar16 + 0x10);
        if (plVar18 == (long *)0x0) break;
        lVar7 = *plVar18;
        lVar19 = *plVar17;
        uVar9 = *(undefined8 *)(lVar6 + uVar13 * 8 + 0x20);
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *plVar11) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
              goto LAB_03cf3ad8;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar18,*plVar11,0xc);
LAB_03cf3ad8:
        uVar5 = (*(code *)*puVar8)(plVar18,uVar9,puVar8[1]);
        if (lVar19 == 0) break;
        uVar13 = uVar13 + 1;
        FUN_03cf43b8(lVar19,uVar13 & 0xffffffff,uVar5 & 1);
        lVar6 = *plVar15;
      } while (lVar6 != 0);
    }
  }
LAB_03cf3b08:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


