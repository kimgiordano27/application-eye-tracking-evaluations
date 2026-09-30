/*
FUNCTION_NAME: OVR.OpenVR.OpenVRInterop$$InitInternal2
ENTRY_POINT: 019e2890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_OpenVRInterop__InitInternal2(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long *plVar12;
  uint uVar13;
  long unaff_x19;
  long lVar14;
  undefined4 unaff_w21;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((*(long *)(unaff_x19 + 0x50) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
    FUN_019d9efc(*(long *)(unaff_x19 + 0x48),*(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x40),
                 unaff_w21,0);
    if ((*(long *)(unaff_x19 + 0x50) != 0) && (lVar17 = *(long *)(unaff_x19 + 0x68), lVar17 != 0)) {
      lVar14 = *(long *)(unaff_x19 + 0x48);
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x40);
      lVar8 = **(long **)(*(long *)(*(long *)
                                     Method_System_Array_InternalArray__ICollection_Add<__Il2CppFullySharedGenericType>__
                                   + 0x20) + 0xc0);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar9 = (undefined4 *)thunk_FUN_00d32ed4(lVar17,*(undefined8 *)(lVar8 + 0x80));
      lVar17 = *(long *)(unaff_x19 + 0x68);
      if (lVar17 != 0) {
        uVar4 = *puVar9;
        lVar8 = **(long **)(*(long *)(*(long *)StringLiteral_10282 + 0x20) + 0xc0);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        puVar10 = (undefined8 *)thunk_FUN_00d32ed4(lVar17,*(long *)(lVar8 + 0x80) + 0x40);
        puVar5 = Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__
        ;
        if (lVar14 != 0) {
          bVar7 = FUN_019d9de0(lVar14,uVar15,unaff_w21,uVar4,*puVar10,0);
          lVar17 = *(long *)(*(long *)puVar5 + 0x20);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c(lVar17);
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          puVar5 = PTR_DAT_033ea8a0;
          pcVar11 = (char *)thunk_FUN_00d32ed4();
          puVar6 = 
          Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__;
          if (*pcVar11 == '\0') {
            lVar17 = *(long *)Method_Sirenix_Serialization_Serializer<char>__ctor__;
          }
          else {
            FUN_01347408();
            uStack0000000000000018 = uStack000000000000001c;
            lVar17 = FUN_017841b4(&stack0x00000018,*(undefined8 *)puVar6,0);
          }
          plVar16 = *(long **)(unaff_x19 + 0x40);
          plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,5);
          uVar15 = thunk_FUN_00d61fa0(*unaff_x26,(long)&stack0x00000018 + 4);
          lVar8 = FUN_015f6780(*unaff_x25,uVar15,0);
          if (plVar12 != (long *)0x0) {
            if ((lVar8 != 0) &&
               (lVar14 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
LAB_019e2c1c:
              uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar15,0);
            }
            uVar13 = *(uint *)(plVar12 + 3);
            if (uVar13 != 0) {
              plVar12[4] = lVar8;
              if (in_stack_00000008 != 0) {
                lVar8 = thunk_FUN_00d6225c(in_stack_00000008,*(undefined8 *)(*plVar12 + 0x40));
                if (lVar8 == 0) goto LAB_019e2c1c;
                uVar13 = *(uint *)(plVar12 + 3);
              }
              puVar5 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
              if (1 < uVar13) {
                plVar12[5] = in_stack_00000008;
                lVar8 = *(long *)puVar5;
                if (lVar8 != 0) {
                  lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                  if (lVar8 == 0) goto LAB_019e2c1c;
                  uVar13 = *(uint *)(plVar12 + 3);
                }
                if (2 < uVar13) {
                  plVar12[6] = *(long *)puVar5;
                  if (lVar17 != 0) {
                    lVar8 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar8 == 0) goto LAB_019e2c1c;
                    uVar13 = *(uint *)(plVar12 + 3);
                  }
                  puVar5 = StringLiteral_12935;
                  if (3 < uVar13) {
                    plVar12[7] = lVar17;
                    lVar17 = *(long *)puVar5;
                    if (lVar17 != 0) {
                      lVar17 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar12 + 0x40));
                      if (lVar17 == 0) goto LAB_019e2c1c;
                      uVar13 = *(uint *)(plVar12 + 3);
                    }
                    if (4 < uVar13) {
                      plVar12[8] = *(long *)puVar5;
                      uVar15 = FUN_01600844(plVar12,0);
                      if (plVar16 != (long *)0x0) {
                        (**(code **)(*plVar16 + 0x558))
                                  (plVar16,uVar15,*(undefined8 *)(*plVar16 + 0x560));
                        bVar7 = bVar7 & 1;
                        if (bVar7 != *(byte *)(unaff_x19 + 0x60)) {
                          if (bVar7 == 0) {
                            puVar9 = (undefined4 *)(unaff_x19 + 0x20);
                            puVar1 = (undefined4 *)(unaff_x19 + 0x24);
                            puVar2 = (undefined4 *)(unaff_x19 + 0x28);
                            puVar3 = (undefined4 *)(unaff_x19 + 0x2c);
                          }
                          else {
                            puVar9 = (undefined4 *)(unaff_x19 + 0x30);
                            puVar1 = (undefined4 *)(unaff_x19 + 0x34);
                            puVar2 = (undefined4 *)(unaff_x19 + 0x38);
                            puVar3 = (undefined4 *)(unaff_x19 + 0x3c);
                          }
                          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_019e2c14;
                          FUN_0267d974(*puVar9,*puVar1,*puVar2,*puVar3,*(long *)(unaff_x19 + 0x58),0
                                      );
                          *(byte *)(unaff_x19 + 0x60) = bVar7;
                        }
                        return;
                      }
                      goto LAB_019e2c14;
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
        }
      }
    }
  }
LAB_019e2c14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


