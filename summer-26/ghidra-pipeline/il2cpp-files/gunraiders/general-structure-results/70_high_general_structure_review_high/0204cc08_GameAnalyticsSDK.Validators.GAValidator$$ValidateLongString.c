/*
FUNCTION_NAME: GameAnalyticsSDK.Validators.GAValidator$$ValidateLongString
ENTRY_POINT: 0204cc08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void GameAnalyticsSDK_Validators_GAValidator__ValidateLongString(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long lVar12;
  ulong uVar13;
  undefined8 in_stack_00000008;
  
  FUN_01c5d288();
  FUN_01c5d288(PTR_DAT_04239378);
  FUN_01c5d288(PTR_DAT_042392d8);
  FUN_01c5d288(PTR_DAT_042313f0);
  FUN_01c5d288(PTR_DAT_04239408);
  FUN_01c5d288(PTR_DAT_0422fd68);
  FUN_01c5d288(System_Func<OnlineFriendFollowData,_string>_TypeInfo);
  FUN_01c5d288(PTR_DAT_04231e50);
  FUN_01c5d288(System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo);
  FUN_01c5d288(PTR_DAT_04231e40);
  FUN_01c5d288(
              System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x18d) = 1;
  puVar3 = System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo;
  lVar11 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x30) != 4) {
      return;
    }
    lVar11 = *(long *)(unaff_x19 + 0x90);
    if (lVar11 != 0) {
      lVar12 = 4;
LAB_0204ccbc:
      if (((*(long *)(lVar11 + 0x20) == 0) ||
          (lVar11 = *(long *)(*(long *)(lVar11 + 0x20) + 0x28), lVar11 == 0)) ||
         (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) goto LAB_0204cd0c;
      uVar13 = lVar12 - 4;
      if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar13) {
        return;
      }
      if (uVar13 < *(uint *)(lVar11 + 0x18)) {
        uVar4 = thunk_FUN_03152714(*(undefined8 *)(lVar11 + lVar12 * 8),*(undefined8 *)puVar3,0);
        if ((uVar4 & 1) == 0) {
          lVar11 = *(long *)(unaff_x19 + 0x90);
          lVar12 = lVar12 + 1;
          if (lVar11 == 0) goto LAB_0204cd0c;
          goto LAB_0204ccbc;
        }
        lVar11 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042313f0);
        FUN_01d35af4(lVar11,0);
        lVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,0xd);
        puVar3 = PTR_DAT_04239408;
        if ((**(long **)(*(long *)PTR_DAT_04239408 + 0xb8) == 0) ||
           (uVar6 = FUN_01f16a18(**(long **)(*(long *)PTR_DAT_04239408 + 0xb8),0), lVar5 == 0))
        goto LAB_0204cd0c;
        if ((*(int *)(lVar5 + 0x18) != 0) &&
           (*(undefined8 *)(lVar5 + 0x20) = uVar6, puVar2 = PTR_DAT_04231e50,
           *(int *)(lVar5 + 0x18) != 1)) {
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04231e50;
          lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
          if (lVar7 == 0) goto LAB_0204cd0c;
          uVar6 = FUN_01f16998(lVar7,0);
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (((2 < uVar1) && (*(undefined8 *)(lVar5 + 0x30) = uVar6, uVar1 != 3)) &&
             ((*(undefined8 *)(lVar5 + 0x38) =
                    *(undefined8 *)
                     System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
              , 4 < uVar1 &&
              (((*(undefined8 *)(lVar5 + 0x40) = unaff_x22, uVar1 != 5 &&
                (*(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)puVar2, 6 < uVar1)) &&
               (*(undefined8 *)(lVar5 + 0x50) = unaff_x21, puVar2 = PTR_DAT_04231e40, uVar1 != 7))))
             )) {
            *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)PTR_DAT_04231e40;
            if (**(long **)(*(long *)PTR_DAT_04239e58 + 0xb8) == 0) goto LAB_0204cd0c;
            in_stack_00000008._4_4_ =
                 *(undefined4 *)(**(long **)(*(long *)PTR_DAT_04239e58 + 0xb8) + 0x30);
            uVar6 = FUN_032cf308((long)&stack0x00000008 + 4,0);
            if ((8 < *(uint *)(lVar5 + 0x18)) &&
               (*(undefined8 *)(lVar5 + 0x60) = uVar6, *(uint *)(lVar5 + 0x18) != 9)) {
              *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)puVar2;
              if (*(int *)(*(long *)PTR_DAT_0422fc88 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar6 = FUN_03cfdda0(0);
              if ((10 < *(uint *)(lVar5 + 0x18)) &&
                 (*(undefined8 *)(lVar5 + 0x70) = uVar6, *(uint *)(lVar5 + 0x18) != 0xb)) {
                *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)puVar2;
                if (*(int *)(*(long *)PTR_DAT_042396c0 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar6 = FUN_021b36ec(0);
                if (*(uint *)(lVar5 + 0x18) < 0xd) goto LAB_0204d01c;
                *(undefined8 *)(lVar5 + 0x80) = uVar6;
                uVar6 = FUN_031533cc(lVar5,0);
                if (lVar11 == 0) goto LAB_0204cd0c;
                *(undefined8 *)(lVar11 + 0x48) = uVar6;
                if ((((*(long *)(unaff_x19 + 0x90) == 0) ||
                     (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0x20), lVar5 == 0)) ||
                    (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) ||
                   (lVar7 = *(long *)(lVar5 + 0x30), lVar7 == 0)) goto LAB_0204cd0c;
                if ((uint)uVar13 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar7 + lVar12 * 8);
                  lVar5 = *(long *)(lVar5 + 0x28);
                  if (lVar5 == 0) goto LAB_0204cd0c;
                  if ((uint)uVar13 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar5 + lVar12 * 8);
                    plVar8 = (long *)FUN_03171e68(0);
                    puVar2 = PTR_DAT_042392d8;
                    lVar12 = *(long *)PTR_DAT_042392d8;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(lVar12);
                      lVar12 = *(long *)puVar2;
                    }
                    if (((**(long **)(lVar12 + 0xb8) != 0) &&
                        (lVar12 = *(long *)(**(long **)(lVar12 + 0xb8) + 0x300), lVar12 != 0)) &&
                       ((plVar9 = *(long **)(lVar12 + 0x30), plVar9 != (long *)0x0 &&
                        (uVar6 = (**(code **)(*plVar9 + 0x548))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x550)),
                        plVar8 != (long *)0x0)))) {
                      uVar6 = (**(code **)(*plVar8 + 0x268))
                                        (plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x270));
                      lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
                      if (lVar12 != 0) {
                        uVar10 = FUN_01f16998(lVar12,0);
                        uVar10 = FUN_03146988(uVar10,*(undefined8 *)
                                                                                                            
                                                  System_Func<OnlineFriendFollowData,_string>_TypeInfo
                                              ,0);
                        FUN_01d36990(lVar11,uVar10,uVar6,0);
                        lVar12 = *(long *)(unaff_x19 + 0x90);
                        if (lVar12 != 0) {
                          *(long *)(lVar12 + 0x70) = lVar11;
                          FUN_01d35c64(lVar12,0);
                          return;
                        }
                      }
                    }
                    goto LAB_0204cd0c;
                  }
                }
              }
            }
          }
        }
      }
LAB_0204d01c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
LAB_0204cd0c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


