/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$CreateFullscreenMesh
ENTRY_POINT: 03cf2c28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03cf3b90) */

long UnityEngine_Rendering_Universal_Internal_DeferredLights__CreateFullscreenMesh(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
  undefined8 *unaff_x20;
  long *plVar17;
  long unaff_x21;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe08));
  thunk_FUN_01efb3a4(PTR_DAT_04572828);
  thunk_FUN_01efb3a4(PTR_DAT_04572830);
  thunk_FUN_01efb3a4(PTR_DAT_04572838);
  thunk_FUN_01efb3a4(PTR_DAT_04572840);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(PTR_DAT_04571910);
  thunk_FUN_01efb3a4(PTR_DAT_04572848);
  thunk_FUN_01efb3a4(PTR_DAT_04572620);
  thunk_FUN_01efb3a4(PTR_DAT_04572850);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_04572858);
  thunk_FUN_01efb3a4(PTR_DAT_04572860);
  thunk_FUN_01efb3a4(PTR_DAT_04572868);
  thunk_FUN_01efb3a4(PTR_DAT_04572870);
  thunk_FUN_01efb3a4(PTR_DAT_04572878);
  thunk_FUN_01efb3a4(PTR_DAT_04572880);
  thunk_FUN_01efb3a4(PTR_DAT_04572800);
  thunk_FUN_01efb3a4(PTR_DAT_04572888);
  thunk_FUN_01efb3a4(PTR_DAT_04572890);
  thunk_FUN_01efb3a4(PTR_DAT_04572898);
  thunk_FUN_01efb3a4(PTR_DAT_045727d8);
  thunk_FUN_01efb3a4(PTR_DAT_045727e0);
  thunk_FUN_01efb3a4(PTR_DAT_045728a0);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Cast<MemberInfo>__);
  thunk_FUN_01efb3a4(PTR_DAT_045728a8);
  *(undefined1 *)(unaff_x19 + 0xe93) = 1;
  lVar6 = thunk_FUN_01f117cc(*unaff_x20);
  FUN_035ac8e8(lVar6,0);
  puVar2 = PTR_DAT_04572850;
  puVar3 = PTR_DAT_04572620;
  if (lVar6 != 0) {
    plVar17 = (long *)(lVar6 + 0x10);
    *plVar17 = unaff_x21;
    thunk_FUN_01f51358(plVar17);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_03cf3c68();
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar3;
    }
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
      thunk_FUN_01f51358();
      *(undefined1 *)(lVar7 + 0x50) = 1;
      plVar18 = (long *)(lVar6 + 0x50);
      *plVar18 = lVar7;
      thunk_FUN_01f51358(plVar18,lVar7);
      puVar4 = PTR_DAT_04572828;
      puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if ((*(long *)(lVar6 + 0x10) != 0) &&
         (plVar19 = *(long **)(*(long *)(lVar6 + 0x10) + 0x10), plVar19 != (long *)0x0)) {
        lVar7 = *plVar19;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04572828) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 9) * 0x10 + 0x138);
              goto LAB_03cf2e68;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar19,*(long *)PTR_DAT_04572828,9);
LAB_03cf2e68:
        uVar10 = (*(code *)*puVar9)(plVar19,puVar9[1]);
        puVar9 = (undefined8 *)(lVar6 + 0x38);
        *puVar9 = uVar10;
        thunk_FUN_01f51358(puVar9,uVar10);
        uVar10 = *puVar9;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03582560(uVar10,0,0);
        if ((uVar14 & 1) != 0) {
LAB_03cf3b5c:
          return *plVar18;
        }
        if ((*plVar17 == 0) || (plVar19 = *(long **)(*plVar17 + 0x10), plVar19 == (long *)0x0))
        goto LAB_03cf3b08;
        lVar8 = *plVar19;
        lVar7 = *(long *)puVar4;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 6) * 0x10 + 0x138);
              goto LAB_03cf2f10;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar19,lVar7,6);
LAB_03cf2f10:
        lVar7 = (*(code *)*puVar9)(plVar19,puVar9[1]);
        if (lVar7 == 0) {
          if (*(int *)(*(long *)Method_System_Linq_Enumerable_Cast<MemberInfo>__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar7 = FUN_03d40d1c(0);
          if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) goto LAB_03cf3b08;
        }
        uVar10 = FUN_03d43f28(lVar7,*(undefined8 *)(lVar6 + 0x38),0);
        puVar9 = (undefined8 *)(lVar6 + 0x28);
        *puVar9 = uVar10;
        thunk_FUN_01f51358(puVar9,uVar10);
        uVar10 = *puVar9;
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (uVar10,0,0);
        if ((uVar14 & 1) != 0) goto LAB_03cf3b5c;
        if ((*plVar17 == 0) || (plVar19 = *(long **)(*plVar17 + 0x10), plVar19 == (long *)0x0))
        goto LAB_03cf3b08;
        lVar8 = *plVar19;
        lVar7 = *(long *)puVar4;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
              goto LAB_03cf2ffc;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar19,lVar7,0xb);
LAB_03cf2ffc:
        lVar7 = (*(code *)*puVar9)(plVar19,puVar9[1]);
        plVar16 = (long *)(lVar6 + 0x30);
        *plVar16 = lVar7;
        thunk_FUN_01f51358(plVar16,lVar7);
        plVar19 = (long *)FUN_04074968(*(undefined8 *)(lVar6 + 0x38),0);
        if (plVar19 == (long *)0x0) {
          *(undefined8 *)(lVar6 + 0x40) = 0;
        }
        else {
          lVar7 = *(long *)PTR_DAT_045728a0;
          bVar1 = *(byte *)(lVar7 + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar19 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) {
LAB_03cf3090:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar19);
          }
          *(long **)(lVar6 + 0x40) = plVar19;
          if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar19 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7))
          goto LAB_03cf3090;
        }
        thunk_FUN_01f51358(lVar6 + 0x40,plVar19);
        puVar2 = PTR_DAT_04572848;
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572848);
        FUN_03cf3cbc();
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar3;
        }
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28);
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28));
          *(undefined1 *)(lVar7 + 0x50) = 1;
          lVar20 = *(long *)(lVar7 + 0x48);
          lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
          FUN_03cf29b4();
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x28) =
                 *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
            thunk_FUN_01f51358();
            puVar3 = PTR_DAT_045727d8;
            lVar11 = *(long *)PTR_DAT_045727d8;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)puVar3;
            }
            lVar22 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
            if (lVar22 == 0) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar11 = *(long *)PTR_DAT_045727d8;
              }
              puVar3 = PTR_DAT_045727d8;
              uVar10 = **(undefined8 **)(lVar11 + 0xb8);
              lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                         );
              FUN_02e631d0(lVar22,uVar10,*(undefined8 *)PTR_DAT_04572860,0);
              plVar19 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
              *plVar19 = lVar22;
              thunk_FUN_01f51358(plVar19,lVar22);
            }
            *(long *)(lVar8 + 0x48) = lVar22;
            thunk_FUN_01f51358((long *)(lVar8 + 0x48),lVar22);
            if (lVar20 != 0) {
              FUN_025d9620(lVar20,lVar8,*(undefined8 *)PTR_DAT_04571910);
              plVar19 = (long *)(lVar6 + 0x20);
              *plVar19 = lVar7;
              thunk_FUN_01f51358(plVar19,lVar7);
              lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
              FUN_03cf3cbc();
              if (lVar7 != 0) {
                *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_045728a8;
                thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28));
                lVar11 = *(long *)(lVar7 + 0x48);
                lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                FUN_03cf29b4();
                puVar3 = PTR_DAT_045727d8;
                lVar20 = *(long *)PTR_DAT_045727d8;
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar20 = *(long *)puVar3;
                }
                lVar22 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x20);
                if (lVar22 == 0) {
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar20 = *(long *)puVar3;
                  }
                  uVar10 = **(undefined8 **)(lVar20 + 0xb8);
                  lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                                               Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                             );
                  FUN_02e631d0(lVar22,uVar10,*(undefined8 *)PTR_DAT_04572868,0);
                  plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                  *plVar12 = lVar22;
                  thunk_FUN_01f51358(plVar12,lVar22);
                }
                if (lVar8 != 0) {
                  *(long *)(lVar8 + 0x48) = lVar22;
                  thunk_FUN_01f51358((long *)(lVar8 + 0x48),lVar22);
                  if (lVar11 != 0) {
                    FUN_025d9620(lVar11,lVar8,*(undefined8 *)PTR_DAT_04571910);
                    puVar3 = PTR_DAT_04572890;
                    lVar8 = *plVar16;
                    if (lVar8 != 0) {
                      if (0 < *(int *)(lVar8 + 0x18)) {
                        uVar14 = 0;
                        do {
                          lVar20 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572898);
                          FUN_035ac8e8(lVar20,0);
                          if (lVar20 == 0) goto LAB_03cf3b08;
                          plVar12 = (long *)(lVar20 + 0x18);
                          *plVar12 = lVar6;
                          thunk_FUN_01f51358(plVar12,lVar6);
                          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_03cf3b80;
                          plVar23 = (long *)(lVar20 + 0x10);
                          *plVar23 = *(long *)(lVar8 + 0x20 + uVar14 * 8);
                          thunk_FUN_01f51358(plVar23);
                          if (*plVar23 == 0) goto LAB_03cf3b08;
                          uVar13 = FUN_03d40c18(*plVar23,0);
                          lVar11 = *plVar23;
                          if (lVar11 == 0) goto LAB_03cf3b08;
                          if ((uVar13 & 1) == 0) {
                            lVar11 = *(long *)(lVar11 + 0x30);
                          }
                          else {
                            lVar11 = FUN_03d408a8(lVar11,0);
                          }
                          if ((*plVar12 == 0) || (lVar22 = *(long *)(*plVar12 + 0x20), lVar22 == 0))
                          goto LAB_03cf3b08;
                          lVar24 = *(long *)(lVar22 + 0x48);
                          lVar22 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                          FUN_03cf29b4();
                          if ((lVar11 == 0) || (uVar10 = FUN_040766fc(lVar11,0), lVar22 == 0))
                          goto LAB_03cf3b08;
                          *(undefined8 *)(lVar22 + 0x28) = uVar10;
                          thunk_FUN_01f51358();
                          uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                              
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                          FUN_02e631d0(uVar10,lVar20,*(undefined8 *)PTR_DAT_04572888,0);
                          *(undefined8 *)(lVar22 + 0x48) = uVar10;
                          thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x48),uVar10);
                          if (lVar24 == 0) goto LAB_03cf3b08;
                          FUN_025d9620(lVar24,lVar22,*(undefined8 *)PTR_DAT_04571910);
                          lVar24 = *(long *)(lVar7 + 0x48);
                          lVar22 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572840);
                          FUN_03cf3d18();
                          uVar10 = FUN_040766fc(lVar11,0);
                          if (lVar22 == 0) goto LAB_03cf3b08;
                          *(undefined8 *)(lVar22 + 0x28) = uVar10;
                          thunk_FUN_01f51358();
                          uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045726e0);
                          FUN_02e631d0(uVar10,lVar20,*(undefined8 *)puVar3,0);
                          *(undefined8 *)(lVar22 + 0x48) = uVar10;
                          thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x48),uVar10);
                          if (lVar24 == 0) goto LAB_03cf3b08;
                          FUN_025d9620(lVar24,lVar22,*(undefined8 *)PTR_DAT_04571910);
                          uVar14 = uVar14 + 1;
                        } while ((long)uVar14 < (long)*(int *)(lVar8 + 0x18));
                      }
                      if (*plVar19 != 0) {
                        lVar11 = *(long *)(*plVar19 + 0x48);
                        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                        FUN_03cf29b4();
                        puVar3 = PTR_DAT_04572620;
                        lVar20 = *(long *)PTR_DAT_04572620;
                        if (*(int *)(lVar20 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar20 = *(long *)puVar3;
                        }
                        puVar3 = PTR_DAT_045727d8;
                        if (lVar8 != 0) {
                          *(undefined8 *)(lVar8 + 0x28) =
                               *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x38);
                          thunk_FUN_01f51358();
                          lVar20 = *(long *)puVar3;
                          if (*(int *)(lVar20 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar20 = *(long *)puVar3;
                          }
                          lVar22 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x28);
                          if (lVar22 == 0) {
                            if (*(int *)(lVar20 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar20 = *(long *)puVar3;
                            }
                            uVar10 = **(undefined8 **)(lVar20 + 0xb8);
                            lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                  
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                            FUN_02e631d0(lVar22,uVar10,*(undefined8 *)PTR_DAT_04572870,0);
                            plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
                            *plVar12 = lVar22;
                            thunk_FUN_01f51358(plVar12,lVar22);
                          }
                          *(long *)(lVar8 + 0x48) = lVar22;
                          thunk_FUN_01f51358((long *)(lVar8 + 0x48),lVar22);
                          if (lVar11 != 0) {
                            FUN_025d9620(lVar11,lVar8,*(undefined8 *)PTR_DAT_04571910);
                            plVar12 = (long *)PTR_DAT_04572828;
                            if ((*plVar18 != 0) && (lVar8 = *(long *)(*plVar18 + 0x48), lVar8 != 0))
                            {
                              FUN_025d9620(lVar8,*plVar19,*(undefined8 *)PTR_DAT_04571910);
                              lVar11 = *(long *)(lVar7 + 0x48);
                              lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045727e0);
                              FUN_03cf29b4();
                              lVar20 = *(long *)puVar3;
                              if (*(int *)(lVar20 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar20 = *(long *)puVar3;
                              }
                              lVar22 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x30);
                              if (lVar22 == 0) {
                                if (*(int *)(lVar20 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                  lVar20 = *(long *)puVar3;
                                }
                                uVar10 = **(undefined8 **)(lVar20 + 0xb8);
                                lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                          
                                                  Method_Mono_Security_Protocol_Ntlm_ChallengeResponse2_Compute__
                                                  );
                                FUN_02e631d0(lVar22,uVar10,*(undefined8 *)PTR_DAT_04572878,0);
                                plVar19 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
                                *plVar19 = lVar22;
                                thunk_FUN_01f51358(plVar19,lVar22);
                                plVar12 = (long *)PTR_DAT_04572828;
                              }
                              if (lVar8 != 0) {
                                *(long *)(lVar8 + 0x48) = lVar22;
                                thunk_FUN_01f51358((long *)(lVar8 + 0x48),lVar22);
                                if (lVar11 != 0) {
                                  FUN_025d9620(lVar11,lVar8,*(undefined8 *)PTR_DAT_04571910);
                                  if ((*plVar18 != 0) &&
                                     (lVar8 = *(long *)(*plVar18 + 0x48), lVar8 != 0)) {
                                    FUN_025d9620(lVar8,lVar7,*(undefined8 *)PTR_DAT_04571910);
                                    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572838);
                                    FUN_030f2380(uVar10,*(undefined8 *)PTR_DAT_04572830);
                                    puVar9 = (undefined8 *)(lVar6 + 0x18);
                                    *puVar9 = uVar10;
                                    thunk_FUN_01f51358(puVar9,uVar10);
                                    FUN_03cf3dc0(lVar6,*(undefined8 *)(lVar6 + 0x38),0,0);
                                    lVar7 = *(long *)puVar3;
                                    uVar10 = *puVar9;
                                    if (*(int *)(lVar7 + 0xe0) == 0) {
                                      thunk_FUN_01ee6d7c();
                                      lVar7 = *(long *)puVar3;
                                    }
                                    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
                                    if (lVar8 == 0) {
                                      if (*(int *)(lVar7 + 0xe0) == 0) {
                                        thunk_FUN_01ee6d7c();
                                        lVar7 = *(long *)puVar3;
                                      }
                                      uVar21 = **(undefined8 **)(lVar7 + 0xb8);
                                      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572810);
                                      FUN_02e6c748(lVar8,uVar21,*(undefined8 *)PTR_DAT_04572858,0);
                                      plVar19 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
                                      *plVar19 = lVar8;
                                      thunk_FUN_01f51358(plVar19,lVar8);
                                    }
                                    plVar19 = (long *)FUN_022fbe3c(uVar10,lVar8,
                                                                   *(undefined8 *)PTR_DAT_04572808);
                                    if (plVar19 != (long *)0x0) {
                                      lVar7 = *plVar19;
                                      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                      if (uVar14 != 0) {
                                        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04572818)
                                          {
                                            puVar9 = (undefined8 *)
                                                     (lVar7 + (long)*piVar15 * 0x10 + 0x138);
                                            goto LAB_03cf3864;
                                          }
                                          uVar14 = uVar14 - 1;
                                          piVar15 = piVar15 + 4;
                                        } while (uVar14 != 0);
                                      }
                                      puVar9 = (undefined8 *)
                                               FUN_01ecb238(plVar19,*(long *)PTR_DAT_04572818,0);
LAB_03cf3864:
                                      plVar19 = (long *)(*(code *)*puVar9)(plVar19,puVar9[1]);
                                      puVar2 = PTR_DAT_04572820;
                                      puVar3 = 
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                      ;
                                      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_01f08a3c();
                                      }
                                      do {
                                        lVar7 = *plVar19;
                                        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                        if (uVar14 != 0) {
                                          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                                              puVar9 = (undefined8 *)
                                                       (lVar7 + (long)*piVar15 * 0x10 + 0x138);
                                              goto LAB_03cf38d4;
                                            }
                                            uVar14 = uVar14 - 1;
                                            piVar15 = piVar15 + 4;
                                          } while (uVar14 != 0);
                                        }
                                        puVar9 = (undefined8 *)
                                                 FUN_01ecb238(plVar19,*(long *)puVar3,0);
LAB_03cf38d4:
                                        uVar14 = (*(code *)*puVar9)(plVar19,puVar9[1]);
                                        if ((uVar14 & 1) == 0) {
                                          if (plVar19 == (long *)0x0) goto LAB_03cf39d4;
                                          lVar7 = *plVar19;
                                          uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                          if (uVar14 == 0) goto LAB_03cf39ac;
                                          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          goto LAB_03cf3994;
                                        }
                                        lVar7 = *plVar19;
                                        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                        if (uVar14 != 0) {
                                          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                                              puVar9 = (undefined8 *)
                                                       (lVar7 + (long)*piVar15 * 0x10 + 0x138);
                                              goto LAB_03cf3930;
                                            }
                                            uVar14 = uVar14 - 1;
                                            piVar15 = piVar15 + 4;
                                          } while (uVar14 != 0);
                                        }
                                        puVar9 = (undefined8 *)
                                                 FUN_01ecb238(plVar19,*(long *)puVar2,0);
LAB_03cf3930:
                                        uVar10 = (*(code *)*puVar9)(plVar19,puVar9[1]);
                                        if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01f08a3c(uVar10,uVar10);
                                        }
                                        lVar7 = *(long *)(*plVar18 + 0x48);
                                        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01f08a3c(0,uVar10);
                                        }
                                        FUN_025d9620(lVar7,uVar10,*(undefined8 *)PTR_DAT_04571910);
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
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_03cf3994:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03cf39c8;
    }
  }
LAB_03cf39ac:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar19,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03cf39c8:
  (*(code *)*puVar9)(plVar19,puVar9[1]);
LAB_03cf39d4:
  if ((*plVar17 != 0) && (plVar19 = *(long **)(*plVar17 + 0x10), plVar19 != (long *)0x0)) {
    lVar7 = *plVar19;
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar12) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
          goto LAB_03cf3a3c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar19,*plVar12,0xd);
LAB_03cf3a3c:
    (*(code *)*puVar9)(plVar19,lVar8,puVar9[1]);
    lVar7 = *plVar16;
    if (lVar7 != 0) {
      uVar14 = 0;
      do {
        if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar14) {
          lVar7 = *(long *)(lVar6 + 0x50);
          *(undefined8 *)(lVar6 + 0x48) = DAT_00c8e838;
          uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                     );
          FUN_02e628e0(uVar10,lVar6,*(undefined8 *)PTR_DAT_04572880,0);
          if (lVar7 != 0) {
            puVar9 = (undefined8 *)(lVar7 + 0x40);
            *puVar9 = uVar10;
            thunk_FUN_01f51358(puVar9,uVar10);
            goto LAB_03cf3b5c;
          }
          break;
        }
        if (*plVar17 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) {
LAB_03cf3b80:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar19 = *(long **)(*plVar17 + 0x10);
        if (plVar19 == (long *)0x0) break;
        lVar8 = *plVar19;
        lVar20 = *plVar18;
        uVar10 = *(undefined8 *)(lVar7 + uVar14 * 8 + 0x20);
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *plVar12) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
              goto LAB_03cf3ad8;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar19,*plVar12,0xc);
LAB_03cf3ad8:
        uVar5 = (*(code *)*puVar9)(plVar19,uVar10,puVar9[1]);
        if (lVar20 == 0) break;
        uVar14 = uVar14 + 1;
        FUN_03cf43b8(lVar20,uVar14 & 0xffffffff,uVar5 & 1);
        lVar7 = *plVar16;
      } while (lVar7 != 0);
    }
  }
LAB_03cf3b08:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


