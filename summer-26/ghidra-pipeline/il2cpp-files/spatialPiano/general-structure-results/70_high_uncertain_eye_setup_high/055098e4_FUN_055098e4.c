/*
FUNCTION_NAME: FUN_055098e4
ENTRY_POINT: 055098e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_055098e4(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  
                    /* catch() { ... } // from try @ 055089a4 with catch @ 055098e4
                       catch() { ... } // from try @ 055096a0 with catch @ 055098e4
                       catch() { ... } // from try @ 055096d4 with catch @ 055098e4 */
                    /* catch() { ... } // from try @ 05508518 with catch @ 055098e8 */
                    /* catch() { ... } // from try @ 055089e8 with catch @ 055098ec
                       catch() { ... } // from try @ 055096a8 with catch @ 055098ec
                       catch() { ... } // from try @ 055096e0 with catch @ 055098ec */
                    /* catch() { ... } // from try @ 05508bac with catch @ 055098f0
                       catch() { ... } // from try @ 05509654 with catch @ 055098f0
                       catch() { ... } // from try @ 05509684 with catch @ 055098f0 */
                    /* catch() { ... } // from try @ 05508cfc with catch @ 055098f4
                       catch() { ... } // from try @ 05509660 with catch @ 055098f4
                       catch() { ... } // from try @ 05509690 with catch @ 055098f4 */
                    /* catch() { ... } // from try @ 055088b8 with catch @ 055098f8
                       catch() { ... } // from try @ 05509644 with catch @ 055098f8
                       catch() { ... } // from try @ 0550966c with catch @ 055098f8 */
                    /* catch() { ... } // from try @ 0550890c with catch @ 055098fc
                       catch() { ... } // from try @ 0550964c with catch @ 055098fc
                       catch() { ... } // from try @ 05509678 with catch @ 055098fc */
                    /* catch() { ... } // from try @ 05508578 with catch @ 05509900
                       catch() { ... } // from try @ 055085d0 with catch @ 05509900
                       catch() { ... } // from try @ 05508a54 with catch @ 05509900
                       catch() { ... } // from try @ 05508a6c with catch @ 05509900
                       catch() { ... } // from try @ 05508aa8 with catch @ 05509900
                       catch() { ... } // from try @ 05508ad4 with catch @ 05509900
                       catch() { ... } // from try @ 05508c70 with catch @ 05509900
                       catch() { ... } // from try @ 05508d68 with catch @ 05509900
                       catch() { ... } // from try @ 05508dc0 with catch @ 05509900
                       catch() { ... } // from try @ 05508e7c with catch @ 05509900
                       catch() { ... } // from try @ 05508e98 with catch @ 05509900
                       catch() { ... } // from try @ 05508f24 with catch @ 05509900
                       catch() { ... } // from try @ 05508fa0 with catch @ 05509900
                       catch() { ... } // from try @ 05508fec with catch @ 05509900
                       catch() { ... } // from try @ 05509064 with catch @ 05509900
                       catch() { ... } // from try @ 055090e4 with catch @ 05509900
                       catch() { ... } // from try @ 0550919c with catch @ 05509900
                       catch() { ... } // from try @ 05509208 with catch @ 05509900
                       catch() { ... } // from try @ 05509594 with catch @ 05509900
                       catch() { ... } // from try @ 055095ec with catch @ 05509900
                       catch() { ... } // from try @ 0550961c with catch @ 05509900 */
  if ((DAT_06bbf57b & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca7c8);
                    /* try { // try from 0550991c to 0560991f has its CatchHandler @ 05509924 */
    FUN_02f08768(OVRPlugin_OVRP_1_30_0_TypeInfo);
                    /* catch() { ... } // from try @ 0550991c with catch @ 05509924 */
                    /* try { // try from 05509928 to 0560992f has its CatchHandler @ 05509938 */
    FUN_02f08768(OVRPlugin_OVRP_1_32_0_TypeInfo);
                    /* try { // try from 05509930 to 0560993b has its CatchHandler @ 0550825c */
                    /* catch() { ... } // from try @ 05509928 with catch @ 05509938 */
    FUN_02f08768(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbc80);
    FUN_02f08768(PTR_DAT_067cbc88);
    DAT_06bbf57b = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_37_0_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_1_37_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    lVar13 = param_2[3];
    if (*(int *)(*(long *)PTR_DAT_067ca7c8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05014ac4(lVar13,0,0);
    if ((uVar6 & 1) == 0) {
      uVar8 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc88);
      }
      uVar6 = FUN_0552b3f4(uVar8,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if ((uVar6 & 1) == 0) {
        if (lVar13 != 0) {
          FUN_054fb07c(lVar13,uVar8);
          return;
        }
      }
      else if (lVar13 != 0) {
        FUN_054f73b4(lVar13,0,0);
        return;
      }
    }
    else {
      plVar7 = (long *)param_2[3];
      if ((plVar7 != (long *)0x0) &&
         (lVar13 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0)),
         lVar13 != 0)) {
        uVar6 = FUN_050ef194(lVar13,0);
        if ((uVar6 & 1) != 0) {
          uVar8 = FUN_054de0e4(0);
          uVar10 = thunk_FUN_02f6ef30(OVRPlugin_OVRP_1_38_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar8,uVar10);
        }
        lVar13 = param_2[3];
        if (*(int *)(*(long *)PTR_DAT_067cbc80 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar13 = FUN_0552a738(lVar13,0);
        puVar5 = OVRPlugin_OVRP_1_35_0_TypeInfo;
        puVar4 = OVRPlugin_OVRP_1_34_0_TypeInfo;
        puVar3 = OVRPlugin_OVRP_1_30_0_TypeInfo;
        if (lVar13 != 0) {
          if (*(int *)(lVar13 + 0x18) < 1) {
            lVar15 = 0;
          }
          else {
            uVar14 = 0;
            lVar15 = 0;
            do {
              uVar8 = FUN_054e59f8(param_2,uVar14,0);
              if (*(uint *)(lVar13 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              plVar7 = *(long **)(lVar13 + (long)(int)uVar14 * 8 + 0x20);
              if ((plVar7 == (long *)0x0) ||
                 (lVar9 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0)),
                 lVar9 == 0)) goto LAB_05509c54;
              uVar6 = FUN_050eed58(lVar9,0);
              if ((uVar6 & 1) == 0) {
                FUN_05500c08(param_1,uVar8);
              }
              else {
                lVar9 = FUN_05503f1c(param_1,uVar8,uVar14);
                if (lVar9 != 0) {
                  if (lVar15 == 0) {
                    lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                    FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                    if (lVar15 == 0) goto LAB_05509c54;
                  }
                  lVar11 = *(long *)(lVar15 + 0x10);
                  lVar12 = *(long *)puVar3;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_05509c54;
                  uVar2 = *(uint *)(lVar15 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                    *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                  }
                  else {
                    FUN_03abf904(lVar15,lVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < *(int *)(lVar13 + 0x18));
          }
          lVar9 = *(long *)(param_1 + 0x10);
          if (lVar15 == 0) {
            if (lVar9 != 0) {
              FUN_054fb0e8(lVar9,param_2[3],lVar13);
              return;
            }
          }
          else {
            lVar11 = param_2[3];
            uVar8 = FUN_03ac12f8(lVar15,*(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo);
            if (lVar9 != 0) {
              FUN_054fb164(lVar9,lVar11,lVar13,uVar8);
              return;
            }
          }
        }
      }
    }
  }
LAB_05509c54:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


