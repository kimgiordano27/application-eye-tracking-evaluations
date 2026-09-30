/*
FUNCTION_NAME: FUN_06d29edc
ENTRY_POINT: 06d29edc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_06d29edc(float param_1,float param_2,undefined1 param_3 [16],undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  float *pfVar1;
  long *plVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  
  puVar4 = Method_RootMotion_FinalIK_GrounderIK_OnPostSolverUpdate__;
  if ((DAT_076e99a4 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727ee10);
    thunk_FUN_032e1da0(Method_RootMotion_FinalIK_GrounderIK_OnSolverUpdate__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_OfType<OpenXRInteractionFeature>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_OfType<PropertyInfo>__);
    thunk_FUN_032e1da0(Method_RootMotion_FinalIK_GrounderQuadruped_OnPostSolverUpdate__);
    thunk_FUN_032e1da0(Method_RootMotion_FinalIK_GrounderIK_OnPostSolverUpdate__);
    thunk_FUN_032e1da0(PTR_DAT_07283ad8);
    thunk_FUN_032e1da0(Method_RootMotion_FinalIK_GrounderQuadruped_OnSolverUpdate__);
    thunk_FUN_032e1da0(Method_RootMotion_FinalIK_GrounderVRIK_OnPostSolverUpdate__);
    thunk_FUN_032e1da0(PTR_DAT_07283ae0);
    thunk_FUN_032e1da0(Method_RootMotion_FinalIK_GrounderVRIK_OnSolverUpdate__);
    thunk_FUN_032e1da0(Method_System_Text_RegularExpressions_Group__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_GroupBoxUtility_RegisterGroupBoxOption<RadioButton>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072800b8);
    thunk_FUN_032e1da0(PTR_DAT_07284400);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_GroupBoxUtility_UnregisterGroupBoxOption<RadioButton>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_GroupBoxUtility_OnGroupBoxDetachedFromPanel__);
    thunk_FUN_032e1da0(PTR_DAT_07284410);
    DAT_076e99a4 = 1;
  }
  puVar7 = Method_RootMotion_FinalIK_GrounderIK_OnSolverUpdate__;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar4 = Method_UnityEngine_UIElements_GroupBoxUtility_RegisterGroupBoxOption<RadioButton>__;
  FUN_0487bb90(param_5,param_6,0,*(undefined8 *)puVar7);
  pfVar1 = (float *)(param_5 + 0x494);
  *(undefined8 *)pfVar1 = DAT_0139e000;
  FUN_06d29bec(param_3._0_8_,param_5);
  FUN_06d29d58(param_4,param_5);
  fVar16 = *(float *)(param_5 + 0x498);
  fVar17 = *(float *)(param_5 + 0x494);
  if (fVar16 < *(float *)(param_5 + 0x494)) {
    *pfVar1 = fVar16;
    fVar17 = fVar16;
  }
  if (param_2 <= fVar16) {
    fVar16 = param_2;
  }
  fVar3 = param_1;
  if (param_1 <= fVar16) {
    fVar3 = fVar16;
    fVar16 = param_1;
  }
  if (param_1 < fVar17) {
    fVar16 = fVar17;
  }
  FUN_06d28478(fVar16,param_5);
  FUN_06d28578(fVar3,param_5);
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar11 = *(long *)puVar4;
  }
  FUN_06db05b0(param_5,**(undefined8 **)(lVar11 + 0xb8),0);
  puVar7 = Method_System_Linq_Enumerable_OfType<PropertyInfo>__;
  if (*(long *)(param_5 + 0x400) != 0) {
    FUN_06db05b0(*(long *)(param_5 + 0x400),*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0
                );
    lVar11 = FUN_0487b074(param_5,*(undefined8 *)puVar7);
    if (lVar11 != 0) {
      FUN_06db05b0(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
      *(undefined4 *)(param_5 + 0x2b4) = 1;
      *(undefined4 *)(param_5 + 0x490) = 0;
      lVar11 = FUN_0487b074(param_5,*(undefined8 *)puVar7);
      puVar5 = PTR_DAT_072800b8;
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x2b4) = 0;
        lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
        FUN_06dade10(lVar11,0);
        if (lVar11 != 0) {
          FUN_06dadae4(lVar11,*(undefined8 *)PTR_DAT_07284410,0);
          FUN_06db05b0(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
          lVar12 = FUN_0487b074(param_5,*(undefined8 *)puVar7);
          if (lVar12 != 0) {
            FUN_06db4eb8(lVar12,lVar11,0);
            lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
            FUN_06dade10(lVar11,0);
            if (lVar11 != 0) {
              FUN_06dadae4(lVar11,*(undefined8 *)PTR_DAT_07284400,0);
              plVar2 = (long *)(param_5 + 0x440);
              *(long *)(param_5 + 0x440) = lVar11;
              thunk_FUN_0333a630(plVar2,lVar11);
              puVar8 = Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__
              ;
              puVar6 = PTR_DAT_07283ae0;
              if (*(long *)(param_5 + 0x440) != 0) {
                FUN_06db05b0(*(long *)(param_5 + 0x440),
                             *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),0);
                lVar11 = *(long *)(param_5 + 0x440);
                uVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar6);
                FUN_05545524(uVar13,param_5,*(undefined8 *)puVar8,0);
                if (lVar11 != 0) {
                  FUN_0394cc9c(lVar11,uVar13,0,*(undefined8 *)PTR_DAT_07283ad8);
                  lVar11 = FUN_0487b074(param_5,*(undefined8 *)puVar7);
                  if (lVar11 != 0) {
                    FUN_06db4eb8(lVar11,*plVar2,0);
                    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                    FUN_06dade10(lVar11,0);
                    if (lVar11 != 0) {
                      FUN_06dadae4(lVar11,*(undefined8 *)
                                           Method_UnityEngine_UIElements_GroupBoxUtility_UnregisterGroupBoxOption<RadioButton>__
                                   ,0);
                      *(long *)(param_5 + 0x448) = lVar11;
                      thunk_FUN_0333a630((undefined8 *)(param_5 + 0x448),lVar11);
                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                      FUN_06dade10(lVar11,0);
                      if (lVar11 != 0) {
                        FUN_06dadae4(lVar11,*(undefined8 *)
                                             Method_UnityEngine_UIElements_GroupBoxUtility_OnGroupBoxDetachedFromPanel__
                                     ,0);
                        *(long *)(param_5 + 0x450) = lVar11;
                        thunk_FUN_0333a630((long *)(param_5 + 0x450),lVar11);
                        if (*(long *)(param_5 + 0x448) != 0) {
                          FUN_06db05b0(*(long *)(param_5 + 0x448),
                                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28),0);
                          lVar11 = *(long *)(param_5 + 0x450);
                          if (lVar11 != 0) {
                            FUN_06db05b0(lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)puVar4 + 0xb8) + 0x30),0);
                            if (*plVar2 != 0) {
                              FUN_06db4eb8(*plVar2,*(undefined8 *)(param_5 + 0x448),0);
                              puVar10 = Method_System_Text_RegularExpressions_Group__ctor__;
                              puVar9 = Method_RootMotion_FinalIK_GrounderVRIK_OnSolverUpdate__;
                              puVar8 = Method_RootMotion_FinalIK_GrounderVRIK_OnPostSolverUpdate__;
                              puVar6 = Method_RootMotion_FinalIK_GrounderQuadruped_OnSolverUpdate__;
                              puVar5 = 
                              Method_RootMotion_FinalIK_GrounderQuadruped_OnPostSolverUpdate__;
                              puVar4 = PTR_DAT_0727ee10;
                              if (*plVar2 != 0) {
                                FUN_06db4eb8(*plVar2,*(undefined8 *)(param_5 + 0x450),0);
                                uVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                FUN_0589e07c(uVar13,param_5,*(undefined8 *)puVar9,0);
                                uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                FUN_0589e07c(uVar14,param_5,*(undefined8 *)puVar10,0);
                                uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
                                FUN_04c09730(uVar15,0,uVar13,uVar14,*(undefined8 *)puVar6);
                                *(undefined8 *)(param_5 + 0x458) = uVar15;
                                thunk_FUN_0333a630(param_5 + 0x458,uVar15);
                                uVar13 = FUN_0487b074(param_5,*(undefined8 *)puVar7);
                                FUN_06cd05d0(uVar13,*(undefined8 *)(param_5 + 0x458),0);
                                fVar16 = (float)param_4;
                                *(float *)(param_5 + 0x494) = param_3._0_4_;
                                *(float *)(param_5 + 0x498) = fVar16;
                                uVar13 = param_3._0_8_;
                                if (fVar16 < param_3._0_4_) {
                                  *pfVar1 = fVar16;
                                  uVar13 = param_4;
                                }
                                if (param_2 <= fVar16) {
                                  fVar16 = param_2;
                                }
                                fVar17 = param_1;
                                if (param_1 <= fVar16) {
                                  fVar17 = fVar16;
                                  fVar16 = param_1;
                                }
                                if (param_1 < (float)uVar13) {
                                  fVar16 = (float)uVar13;
                                }
                                FUN_0487b1b8(fVar16,fVar17,param_5,*(undefined8 *)puVar5);
                                FUN_06d28788(param_5);
                                return;
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


