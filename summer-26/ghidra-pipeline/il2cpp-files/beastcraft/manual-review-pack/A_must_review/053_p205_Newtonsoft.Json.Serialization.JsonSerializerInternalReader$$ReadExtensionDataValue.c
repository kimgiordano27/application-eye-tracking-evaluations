/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 055d8cd8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue(long param_1)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar10;
  undefined *puVar9;
  
  if ((DAT_06e8d626 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a368c0);
    DAT_06e8d626 = 1;
  }
  puVar9 = PTR_DAT_06a2f000;
                    /* try { // try from 055d8d08 to 056d8d0b has its CatchHandler @ 055d8d28 */
                    /* try { // try from 055d8d0c to 056d8d0f has its CatchHandler @ 055d8d20 */
                    /* try { // try from 055d8d10 to 056d8d13 has its CatchHandler @ 055d8d18 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8c5c with catch @ 055d8d14
                       try { // try from 055d8d14 to 056d8d47 has its CatchHandler @ 055d8b50 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8d10 with catch @ 055d8d18
                        */
  uVar5 = thunk_FUN_0548b788(param_1,**(undefined8 **)(*(long *)(PTR_DAT_06a2f000 + 0x90) + 0xb8),0)
  ;
  puVar2 = PTR_DAT_06a368c0;
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8c24 with catch @ 055d8d1c
                        */
  if ((uVar5 & 1) != 0) {
    thunk_FUN_02ea289c(PTR_DAT_06a30728);
    uVar6 = thunk_FUN_02e78ab8();
    puVar9 = PTR_DAT_06a83558;
    goto LAB_055d9014;
  }
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8d0c with catch @ 055d8d20
                        */
  if (param_1 != 0) {
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8c3c with catch @ 055d8d24
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8bfc with catch @ 055d8d28
                       catch(type#1 @ 066644a8) { ... } // from try @ 055d8d08 with catch @ 055d8d28
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8be0 with catch @ 055d8d2c
                        */
    if (*(int *)(*(long *)PTR_DAT_06a368c0 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar6 = FUN_055dd724(param_1);
                    /* try { // try from 055d8d48 to 056d8d4b has its CatchHandler @ 055d8d58 */
    uVar5 = thunk_FUN_0548b788(uVar6,param_1,0);
                    /* catch() { ... } // from try @ 055d8d48 with catch @ 055d8d58 */
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 055d8d5c to 056d8d63 has its CatchHandler @ 055d8d6c */
                    /* try { // try from 055d8d64 to 056d8d6f has its CatchHandler @ 055d8b50 */
      lVar7 = FUN_05491f08(param_1,0);
      if (lVar7 == 0) {
LAB_055d8fd4:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055d8d5c with catch @ 055d8d6c
                        */
      if (*(int *)(lVar7 + 0x10) == 0) {
        thunk_FUN_02ea289c(PTR_DAT_06a30728);
        uVar6 = thunk_FUN_02e78ab8();
        puVar9 = PTR_DAT_06a83560;
      }
      else {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar7 = *(long *)puVar2;
        }
        iVar4 = FUN_05492684(param_1,**(undefined8 **)(lVar7 + 0xb8),0);
        if (iVar4 < 0) {
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar7 = *(long *)puVar2;
          }
          iVar4 = FUN_05492f88(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),0);
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          else if (iVar4 < 1) {
            return **(undefined8 **)(*(long *)(puVar9 + 0x90) + 0xb8);
          }
          lVar7 = FUN_0548f424(param_1,0,iVar4,0);
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar7 + 0x10);
            if (iVar1 < 2) {
              lVar10 = *(long *)puVar2;
              if (iVar1 == 1) {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c(lVar10);
                  lVar10 = *(long *)puVar2;
                }
                if ((*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) &&
                   (1 < *(int *)(param_1 + 0x10))) {
                  sVar3 = FUN_05487524(param_1,iVar4,0);
                  lVar10 = *(long *)puVar2;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(lVar10);
                    lVar10 = *(long *)puVar2;
                  }
                  if (*(short *)(*(long *)(lVar10 + 0xb8) + 0x18) == sVar3) {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c(lVar10);
                    }
                    if (*(int *)(*(long *)(puVar9 + 0x88) + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    lVar10 = *(long *)(*(long *)puVar2 + 0xb8) + 0x18;
                    goto LAB_055d8f64;
                  }
                }
              }
            }
            else {
              lVar10 = *(long *)puVar2;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar10);
                lVar10 = *(long *)puVar2;
              }
              if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) {
                sVar3 = FUN_05487524(lVar7,iVar1 + -1,0);
                lVar10 = *(long *)puVar2;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c(lVar10);
                  lVar10 = *(long *)puVar2;
                }
                if (*(short *)(*(long *)(lVar10 + 0xb8) + 0x18) == sVar3) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(lVar10);
                  }
                  if (*(int *)(*(long *)(puVar9 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  lVar10 = *(long *)(*(long *)puVar2 + 0xb8) + 10;
LAB_055d8f64:
                  uVar6 = FUN_0556e974(lVar10,0);
                  uVar6 = FUN_05482ce0(lVar7,uVar6,0);
                  return uVar6;
                }
              }
            }
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar10);
            }
            uVar6 = FUN_055dd2c8(lVar7);
            return uVar6;
          }
          goto LAB_055d8fd4;
        }
        thunk_FUN_02ea289c(PTR_DAT_06a30728);
        uVar6 = thunk_FUN_02e78ab8();
        puVar9 = PTR_DAT_06a83568;
      }
LAB_055d9014:
      uVar8 = thunk_FUN_02ea289c(puVar9);
      FUN_0557a944(uVar6,uVar8,0);
      uVar8 = thunk_FUN_02ea289c(PTR_DAT_06a83570);
                    /* WARNING: Subroutine does not return */
      FUN_02e3cb88(uVar6,uVar8);
    }
  }
  return 0;
}


