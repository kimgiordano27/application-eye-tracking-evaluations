/*
FUNCTION_NAME: Unity.Serialization.Json.UnsafePackedBinaryWriter$$Write
ENTRY_POINT: 03387a20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


long Unity_Serialization_Json_UnsafePackedBinaryWriter__Write(long param_1,long *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long in_stack_00000008;
  
  puVar3 = Unity_Services_Analytics_Data_IDeviceData_TypeInfo;
                    /* try { // try from 03387a44 to 03487a53 has its CatchHandler @ 03387e50 */
  if ((DAT_0412d0bf & 1) == 0) {
    FUN_01ab69ac(System_Collections_IDictionary_TypeInfo);
    FUN_01ab69ac(System_Collections_IDictionaryEnumerator_TypeInfo);
                    /* try { // try from 03387a64 to 03487a67 has its CatchHandler @ 03387e34 */
    FUN_01ab69ac(PTR_DAT_03cbfc08);
    FUN_01ab69ac(PTR_DAT_03cbe510);
                    /* try { // try from 03387a80 to 03487a83 has its CatchHandler @ 03387e20 */
    FUN_01ab69ac(PTR_DAT_03cbe518);
    FUN_01ab69ac(Unity_Services_Analytics_Data_IDeviceData_TypeInfo);
                    /* try { // try from 03387a94 to 03487a97 has its CatchHandler @ 03387e38 */
    DAT_0412d0bf = 1;
  }
                    /* try { // try from 03387a9c to 03487aa7 has its CatchHandler @ 03387e6c */
  *(int *)(param_1 + 0x94) = (int)param_2[1];
                    /* try { // try from 03387aa8 to 03487ab3 has its CatchHandler @ 03387e5c */
  lVar12 = *(long *)puVar3;
  if (*param_2 != 0) {
    lVar12 = *param_2;
  }
  plVar13 = (long *)(param_1 + 0xa0);
  *plVar13 = lVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13);
  *(undefined1 *)(param_1 + 0x98) = 1;
  uVar2 = *(undefined1 *)((long)param_2 + 0xc);
                    /* try { // try from 03387ad8 to 03487adb has its CatchHandler @ 03387e40 */
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  *(undefined1 *)(param_1 + 0xa8) = uVar2;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03387d04();
    if (*(long *)(param_1 + 0x30) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x14) != '\0') {
                    /* try { // try from 03387afc to 03487aff has its CatchHandler @ 03387e60 */
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_03387cf0;
        FUN_03387db0(*(long *)(param_1 + 0x38),*plVar13);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_03387ea0(*(long *)(param_1 + 0x40),param_1);
                    /* try { // try from 03387b18 to 03487b1b has its CatchHandler @ 03387e30 */
        if (*(long *)(param_1 + 0x58) != 0) {
                    /* try { // try from 03387b20 to 03487b2f has its CatchHandler @ 03387e54 */
          *(long *)(*(long *)(param_1 + 0x58) + 0x18) = param_2[3];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    /* try { // try from 03387b30 to 03487b97 has its CatchHandler @ 03387650 */
          if (*(long *)(param_1 + 0x58) != 0) {
            *(long *)(*(long *)(param_1 + 0x58) + 0x10) = param_2[2];
            if (*(long *)(param_1 + 0x58) != 0) {
              *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x20) = *(undefined8 *)(param_1 + 0x18);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if (*(long *)(param_1 + 0x58) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x28) = *(undefined8 *)(param_1 + 0x40);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if (*(long *)(param_1 + 0x30) != 0) {
                  if (*(char *)(*(long *)(param_1 + 0x30) + 0x13) == '\0') {
LAB_03387cc4:
                    in_stack_00000008 = param_1;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (&stack0x00000008,param_1);
                    return in_stack_00000008;
                  }
                  FUN_03388080(param_1);
                  puVar6 = System_Collections_IDictionary_TypeInfo;
                  puVar5 = PTR_DAT_03cbfc08;
                  puVar4 = PTR_DAT_03cbe518;
                  puVar3 = PTR_DAT_03cbe510;
                  lVar12 = *(long *)(param_1 + 0x80);
                  if (lVar12 != 0) {
                    uVar7 = FUN_021a214c(lVar12,*(undefined8 *)
                                                 System_Collections_IDictionaryEnumerator_TypeInfo);
                    FUN_021a21c8(lVar12,uVar7,0,*(undefined8 *)puVar6);
                    uVar14 = 0;
                    lVar12 = 0x20;
                    *(undefined4 *)(param_1 + 0x68) = 0;
                    do {
                      plVar13 = *(long **)(param_1 + 0x70);
                      if (plVar13 == (long *)0x0) goto LAB_03387cf0;
                      if (*(uint *)(plVar13 + 3) <= uVar14) {
LAB_03387cf4:
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      if (*(long *)((long)plVar13 + lVar12) == 0) {
                        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                        Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)puVar3);
                        if ((lVar8 != 0) &&
                           (lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar9 == 0)) {
                          uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar11,0);
                        }
                        if (*(uint *)(plVar13 + 3) <= uVar14) goto LAB_03387cf4;
                        *(long *)((long)plVar13 + lVar12) = lVar8;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((long *)((long)plVar13 + lVar12),lVar8);
                        plVar13 = *(long **)(param_1 + 0x70);
                        if (plVar13 == (long *)0x0) goto LAB_03387cf0;
                      }
                      if (*(uint *)(plVar13 + 3) <= uVar14) goto LAB_03387cf4;
                      lVar8 = *(long *)((long)plVar13 + lVar12);
                      if (lVar8 == 0) goto LAB_03387cf0;
                      lVar9 = *(long *)puVar5;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      uVar10 = FUN_01ab7534(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
                      if ((uVar10 & 1) == 0) {
                        *(undefined4 *)(lVar8 + 0x18) = 0;
                      }
                      else {
                        iVar1 = *(int *)(lVar8 + 0x18);
                        *(undefined4 *)(lVar8 + 0x18) = 0;
                        if (0 < iVar1) {
                          FUN_02793a34(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
                        }
                      }
                      uVar14 = uVar14 + 1;
                      lVar12 = lVar12 + 8;
                    } while (uVar14 != 2);
                    if (*(long *)(param_1 + 0x10) != 0) {
                      FUN_03388264(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x94));
                      goto LAB_03387cc4;
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
LAB_03387cf0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


