/*
FUNCTION_NAME: FUN_02e4ebac
ENTRY_POINT: 02e4ebac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_02e4ebac(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 float param_4,long param_5,long param_6,undefined4 param_7,undefined8 param_8,
                 float *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar1 = StringLiteral_5068;
  uVar12 = param_3._4_4_;
  uVar11 = param_3._0_4_;
  if ((DAT_03ff0310 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<CopyFrom>b__171_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_5069);
    thunk_FUN_01ad9084(StringLiteral_5068);
    thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__
                      );
    DAT_03ff0310 = 1;
  }
  lVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_03081994(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_5;
    thunk_FUN_01b4f09c((long *)(lVar4 + 0x10),param_5);
    *(undefined4 *)(lVar4 + 0x18) = param_7;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (param_6 != 0) {
      plVar5 = (long *)FUN_01e8ac5c(param_6,*(undefined8 *)
                                             Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<CopyFrom>b__171_0__
                                   );
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar8);
      }
      uVar6 = FUN_0391f968(plVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if (plVar5 == (long *)0x0) goto LAB_02e4eef8;
        (**(code **)(*plVar5 + 0x5e8))(plVar5,param_8,*(undefined8 *)(*plVar5 + 0x5f0));
      }
      puVar3 = StringLiteral_5069;
      puVar2 = Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__;
      if (*(long *)(param_6 + 0x118) != 0) {
        FUN_0392e40c(*(long *)(param_6 + 0x118),0);
        FUN_03b1de40(param_6,0,0);
        lVar8 = *(long *)(param_6 + 0x118);
        uVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
        FUN_021ffadc(uVar7,lVar4,*(undefined8 *)puVar3,0);
        puVar2 = Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__;
        if (lVar8 != 0) {
          FUN_022017b8(lVar8,uVar7,
                       *(undefined8 *)
                        Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__
                      );
          lVar4 = FUN_01e8a9f8(param_6,*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            FUN_03927d54(0,0x3f800000,lVar4,0);
            UnityEngine_UIElements_StyleSheets_StyleSelectorHelper__MatchesSelector
                      (0x3f800000,0x3f800000,lVar4,0);
            FUN_039281c4(0x3f000000,0x3f800000,lVar4,0);
            if ((*(long *)(param_5 + 0x40) != 0) &&
               (lVar8 = *(long *)(*(long *)(param_5 + 0x40) + 0x20), lVar8 != 0)) {
              UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                        (lVar8,0);
              FUN_039289c4(CONCAT44(uVar12,uVar11),lVar4,0,0);
              FUN_03927f8c(0,-*param_9,lVar4,0);
              UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                        (lVar4,0);
              fVar9 = param_4;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar6 = FUN_0391f968(plVar5,0,0);
              if ((uVar6 & 1) != 0) {
                if ((plVar5 == (long *)0x0) || (lVar8 = FUN_039ad440(plVar5,0), lVar8 == 0))
                goto LAB_02e4eef8;
                UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                          (lVar8,0);
                param_4 = param_4 - fVar9;
                if (param_4 <= 0.0) {
                  param_4 = 0.0;
                }
                fVar9 = (float)(**(code **)(*plVar5 + 0x658))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x660));
                fVar10 = *(float *)(param_5 + 0x50);
                if (DAT_03fed2d9 == '\0') {
                  thunk_FUN_01ad9084(
                                    Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                    );
                  DAT_03fed2d9 = '\x01';
                }
                fVar9 = param_4 + fVar9 + fVar10;
                if (*(int *)(*(long *)
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                param_4 = -2.1474836e+09;
                if ((float)(int)fVar9 != INFINITY) {
                  param_4 = (float)(int)fVar9;
                }
                FUN_039289c4(param_4,lVar4,1,0);
              }
              *param_9 = param_4 + *param_9;
              return;
            }
          }
        }
      }
    }
  }
LAB_02e4eef8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


