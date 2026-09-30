/*
FUNCTION_NAME: PlayFab.Json.JsonArray$$.ctor
ENTRY_POINT: 051e6b28
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void PlayFab_Json_JsonArray___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  if (param_1 != 0) {
    if (0xf6 < *unaff_x23) {
      unaff_x19[0xfa] = unaff_x20;
      thunk_FUN_02dc1ef0(unaff_x19 + 0xfa);
      lVar5 = thunk_FUN_02d8a638(*unaff_x22);
      FUN_03cb2784(lVar5,4,*unaff_x21);
      if (lVar5 == 0) {
LAB_051e6f54:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      *(undefined1 *)(lVar5 + 0x2c) = 0xf7;
      lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar6 == 0) goto LAB_051e6f58;
      if (0xf7 < *unaff_x23) {
        unaff_x19[0xfb] = lVar5;
        thunk_FUN_02dc1ef0(unaff_x19 + 0xfb,lVar5);
        lVar5 = thunk_FUN_02d8a638(*unaff_x22);
        FUN_03cb2784(lVar5,4,*unaff_x21);
        if (lVar5 == 0) goto LAB_051e6f54;
        *(undefined1 *)(lVar5 + 0x2c) = 0xf8;
        lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar6 == 0) goto LAB_051e6f58;
        if (0xf8 < *unaff_x23) {
          unaff_x19[0xfc] = lVar5;
          thunk_FUN_02dc1ef0(unaff_x19 + 0xfc,lVar5);
          lVar5 = thunk_FUN_02d8a638(*unaff_x22);
          FUN_03cb2784(lVar5,4,*unaff_x21);
          if (lVar5 == 0) goto LAB_051e6f54;
          *(undefined1 *)(lVar5 + 0x2c) = 0xf9;
          lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar6 == 0) goto LAB_051e6f58;
          if (0xf9 < *unaff_x23) {
            unaff_x19[0xfd] = lVar5;
            thunk_FUN_02dc1ef0(unaff_x19 + 0xfd,lVar5);
            lVar5 = thunk_FUN_02d8a638(*unaff_x22);
            FUN_03cb2784(lVar5,4,*unaff_x21);
            if (lVar5 == 0) goto LAB_051e6f54;
            *(undefined1 *)(lVar5 + 0x2c) = 0xfa;
            lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar6 == 0) goto LAB_051e6f58;
            if (0xfa < *unaff_x23) {
              unaff_x19[0xfe] = lVar5;
              thunk_FUN_02dc1ef0(unaff_x19 + 0xfe,lVar5);
              lVar5 = thunk_FUN_02d8a638(*unaff_x22);
              FUN_03cb2784(lVar5,4,*unaff_x21);
              if (lVar5 == 0) goto LAB_051e6f54;
              *(undefined1 *)(lVar5 + 0x2c) = 0xfb;
              lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar6 == 0) goto LAB_051e6f58;
              if (0xfb < *unaff_x23) {
                unaff_x19[0xff] = lVar5;
                thunk_FUN_02dc1ef0(unaff_x19 + 0xff,lVar5);
                lVar5 = thunk_FUN_02d8a638(*unaff_x22);
                FUN_03cb2784(lVar5,4,*unaff_x21);
                if (lVar5 == 0) goto LAB_051e6f54;
                *(undefined1 *)(lVar5 + 0x2c) = 0xfc;
                lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar6 == 0) goto LAB_051e6f58;
                if (0xfc < *unaff_x23) {
                  unaff_x19[0x100] = lVar5;
                  thunk_FUN_02dc1ef0(unaff_x19 + 0x100,lVar5);
                  lVar5 = thunk_FUN_02d8a638(*unaff_x22);
                  FUN_03cb2784(lVar5,4,*unaff_x21);
                  if (lVar5 == 0) goto LAB_051e6f54;
                  *(undefined1 *)(lVar5 + 0x2c) = 0xfd;
                  lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar6 == 0) goto LAB_051e6f58;
                  if (0xfd < *unaff_x23) {
                    unaff_x19[0x101] = lVar5;
                    thunk_FUN_02dc1ef0(unaff_x19 + 0x101,lVar5);
                    lVar5 = thunk_FUN_02d8a638(*unaff_x22);
                    FUN_03cb2784(lVar5,4,*unaff_x21);
                    if (lVar5 == 0) goto LAB_051e6f54;
                    *(undefined1 *)(lVar5 + 0x2c) = 0xfe;
                    lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar6 == 0) goto LAB_051e6f58;
                    if (0xfe < *unaff_x23) {
                      unaff_x19[0x102] = lVar5;
                      thunk_FUN_02dc1ef0(unaff_x19 + 0x102,lVar5);
                      lVar5 = thunk_FUN_02d8a638(*unaff_x22);
                      FUN_03cb2784(lVar5,4,*unaff_x21);
                      if (lVar5 == 0) goto LAB_051e6f54;
                      *(undefined1 *)(lVar5 + 0x2c) = 0xff;
                      lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                      puVar4 = UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var;
                      puVar3 = UnityEngine_UIElements_StyleSheet_ImportStruct_var;
                      puVar2 = 
                      UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var;
                      puVar1 = UnityEngine_XR_Interaction_Toolkit_UI_TouchModel_var;
                      if (lVar6 == 0) goto LAB_051e6f58;
                      if ((*unaff_x23 & 0xffffff00) != 0) {
                        unaff_x19[0x103] = lVar5;
                        thunk_FUN_02dc1ef0(unaff_x19 + 0x103,lVar5);
                        **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                        thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8));
                        plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar3,2);
                        lVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                        FUN_03cb21c8(lVar5,4,*(undefined8 *)puVar4);
                        if ((lVar5 == 0) ||
                           (*(undefined1 *)(lVar5 + 0x2c) = 0, plVar7 == (long *)0x0))
                        goto LAB_051e6f54;
                        lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
                        if (lVar6 == 0) goto LAB_051e6f58;
                        if ((int)plVar7[3] != 0) {
                          plVar7[4] = lVar5;
                          thunk_FUN_02dc1ef0(plVar7 + 4,lVar5);
                          lVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                          FUN_03cb21c8(lVar5,4,*(undefined8 *)puVar4);
                          if (lVar5 == 0) goto LAB_051e6f54;
                          *(undefined1 *)(lVar5 + 0x2c) = 1;
                          lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
                          if (lVar6 == 0) goto LAB_051e6f58;
                          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                            plVar7[5] = lVar5;
                            thunk_FUN_02dc1ef0(plVar7 + 5,lVar5);
                            plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                            *plVar8 = (long)plVar7;
                            thunk_FUN_02dc1ef0(plVar8,plVar7);
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
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
LAB_051e6f58:
  uVar9 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar9,0);
}


