/*
FUNCTION_NAME: FUN_076c6990
ENTRY_POINT: 076c6990
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 FUN_076c6990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  
  if ((DAT_08271403 & 1) == 0) {
    FUN_0373b518(Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    FUN_0373b518(PTR_DAT_07d965b8);
    FUN_0373b518(PTR_DAT_07d965c0);
    FUN_0373b518(PTR_DAT_07d965c8);
                    /* try { // try from 076c6a08 to 077c6a6f has its CatchHandler @ 076c6a08
                       catch() { ... } // from try @ 076c6a08 with catch @ 076c6a08
                       catch() { ... } // from try @ 076c6b0c with catch @ 076c6a08
                       catch() { ... } // from try @ 076c6b44 with catch @ 076c6a08 */
    FUN_0373b518(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__);
    FUN_0373b518(PTR_DAT_07d965e8);
    FUN_0373b518(PTR_DAT_07d965f0);
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08271403 = 1;
  }
  uVar6 = FUN_075a6c34(param_3,0);
  if ((uVar6 & 1) == 0) {
LAB_076c6dc0:
    uVar10 = 0;
  }
  else {
    lVar7 = FUN_075a73b4(param_3,0);
                    /* try { // try from 076c6a70 to 077c6a8f has its CatchHandler @ 076c6b2c */
    if (*(int *)(*(long *)PTR_DAT_07d965c8 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d965c8);
    }
    lVar8 = FUN_0544a95c(*(undefined8 *)PTR_DAT_07d965b8);
    puVar4 = Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__;
    puVar3 = PTR_DAT_07d965f0;
    puVar2 = PTR_DAT_07d86398;
                    /* try { // try from 076c6aa4 to 077c6aab has its CatchHandler @ 076c6b24 */
    uVar19 = 0;
    uVar18 = 1;
    while( true ) {
      lVar17 = lVar7;
                    /* try { // try from 076c6ac4 to 077c6ad7 has its CatchHandler @ 076c6b28 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar6 = FUN_075aa744(lVar17,0,0);
      if ((uVar6 & 1) == 0) break;
                    /* try { // try from 076c6ae8 to 077c6b0b has its CatchHandler @ 076c6b30 */
      if ((lVar17 == 0) ||
         (Unity_Jobs_IJobExtensions__EarlyJobInit<UDPNetworkInterface_FlushSendJob>
                    (lVar17,lVar8,
                     *(undefined8 *)Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__),
         lVar8 == 0)) {
LAB_076c6e18:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (0 < *(int *)(lVar8 + 0x18)) {
                    /* try { // try from 076c6b0c to 077c6b3f has its CatchHandler @ 076c6a08 */
        iVar16 = 0;
        do {
          plVar9 = (long *)FUN_049cec24(lVar8,iVar16,*(undefined8 *)puVar3);
          if (plVar9 == (long *)0x0) {
                    /* try { // try from 076c6b40 to 077c6b43 has its CatchHandler @ 076c6b58 */
            plVar9 = (long *)0x0;
          }
          else {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076c6aa4 with catch @ 076c6b24
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076c6ac4 with catch @ 076c6b28
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076c6a70 with catch @ 076c6b2c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076c6ae8 with catch @ 076c6b30
                        */
            if (*plVar9 != *(long *)Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__) {
              plVar9 = (long *)0x0;
            }
          }
                    /* try { // try from 076c6b44 to 077c6b5f has its CatchHandler @ 076c6a08 */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
                    /* catch() { ... } // from try @ 076c6b40 with catch @ 076c6b58 */
                    /* try { // try from 076c6b60 to 077c6b67 has its CatchHandler @ 076c6b68 */
          uVar6 = FUN_075aa744(plVar9,0,0);
          if ((uVar6 & 1) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 076c6b60 with catch @ 076c6b68
                        */
            if (plVar9 == (long *)0x0) goto LAB_076c6e18;
            uVar5 = FUN_0788d958(plVar9,0);
            uVar18 = uVar18 & (uVar5 ^ 1);
          }
          uVar10 = FUN_049cec24(lVar8,iVar16,*(undefined8 *)puVar3);
          plVar9 = (long *)thunk_FUN_037787d0(uVar10,*(undefined8 *)puVar4);
          if (plVar9 != (long *)0x0) {
            plVar11 = (long *)FUN_049cec24(lVar8,iVar16,*(undefined8 *)puVar3);
            if (plVar11 == (long *)0x0) {
              plVar11 = (long *)0x0;
            }
            else if (*plVar11 != *(long *)Method_OVRTask_Awaiter<bool>_get_IsCompleted__) {
              plVar11 = (long *)0x0;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar6 = FUN_075aa744(plVar11,0,0);
            if ((uVar6 & 1) == 0) {
              lVar7 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                    puVar13 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_076c6cb4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar6 != 0);
              }
              puVar13 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar4,0);
LAB_076c6cb4:
              uVar6 = (*(code *)*puVar13)(param_1,param_2,plVar9,param_4,puVar13[1]);
              if ((uVar6 & 1) == 0) goto LAB_076c6d94;
            }
            else {
              if (plVar11 == (long *)0x0) goto LAB_076c6e18;
              uVar5 = FUN_075a6abc(plVar11,0);
              if (((uVar19 | uVar5 ^ 0xffffffff) & 1) == 0) {
                uVar12 = FUN_0788a0d8(plVar11,0);
                lVar14 = *plVar9;
                lVar7 = *(long *)puVar4;
                uVar1 = *(ushort *)(lVar14 + 0x12e);
                uVar6 = (ulong)uVar1;
                if ((uVar12 & 1) == 0) {
                  if (uVar1 != 0) {
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == lVar7) {
                        puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_076c6d54;
                      }
                      uVar6 = uVar6 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_0377596c(plVar9,lVar7,0);
LAB_076c6d54:
                  uVar6 = (*(code *)*puVar13)(param_1,param_2,plVar9,param_4,puVar13[1]);
                  if ((uVar6 & 1) == 0) goto LAB_076c6d94;
                  uVar19 = 0;
                }
                else {
                  if (uVar1 != 0) {
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == lVar7) {
                        puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_076c6d24;
                      }
                      uVar6 = uVar6 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_0377596c(plVar9,lVar7,0);
LAB_076c6d24:
                  uVar6 = (*(code *)*puVar13)(param_1,param_2,plVar9,param_4,puVar13[1]);
                  if ((uVar6 & 1) == 0) {
LAB_076c6d94:
                    if (*(int *)(*(long *)PTR_DAT_07d965c8 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                    }
                    FUN_0544aa9c(lVar8,*(undefined8 *)PTR_DAT_07d965c0);
                    goto LAB_076c6dc0;
                  }
                  uVar19 = 1;
                }
              }
              else {
                uVar19 = uVar19 | uVar5;
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar8 + 0x18));
      }
      lVar7 = 0;
      if (uVar18 != 0) {
        lVar7 = thunk_FUN_075babc0(lVar17,0);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_07d965c8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0544aa9c(lVar8,*(undefined8 *)PTR_DAT_07d965c0);
    uVar10 = 1;
  }
  return uVar10;
}


