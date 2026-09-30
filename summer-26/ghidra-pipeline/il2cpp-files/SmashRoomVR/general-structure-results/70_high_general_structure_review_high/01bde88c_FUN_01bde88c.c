/*
FUNCTION_NAME: FUN_01bde88c
ENTRY_POINT: 01bde88c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


void FUN_01bde88c(undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_03fed29d & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed29d = 1;
  }
  uVar4 = (**(code **)(*param_5 + 0x178))(param_5,*(undefined8 *)(*param_5 + 0x180));
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((char)param_5[0x12] != '\0') {
    uVar5 = FUN_038f1768(0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_0391f968(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = FUN_038f1768(0);
      if ((lVar6 == 0) || (lVar6 = FUN_0391c27c(lVar6,0), lVar6 == 0)) goto LAB_01bded0c;
      fVar8 = (float)FUN_03928d34(lVar6,0);
      fVar17 = param_3;
      fVar15 = param_2;
      lVar6 = FUN_0391c27c(param_5,0);
      if (lVar6 == 0) goto LAB_01bded0c;
      fVar9 = (float)FUN_03928d34(lVar6,0);
      fVar14 = fVar17;
      fVar16 = fVar15;
      if (DAT_03fed25c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25c = '\x01';
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (param_5[6] == 0) goto LAB_01bded0c;
      fVar10 = *(float *)(param_5 + 0xf);
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                (param_5[6],0);
      lVar6 = FUN_0391c27c(param_5,0);
      if (lVar6 == 0) goto LAB_01bded0c;
      fVar11 = (float)FUN_0392a7f0(lVar6,0);
      if (param_5[6] == 0) goto LAB_01bded0c;
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                (param_5[6],0);
      lVar6 = FUN_0391c27c(param_5,0);
      if (lVar6 == 0) goto LAB_01bded0c;
      FUN_0392a7f0(lVar6,0);
      plVar7 = (long *)param_5[10];
      if (plVar7 == (long *)0x0) goto LAB_01bded0c;
      fVar12 = fVar14 * fVar11;
      if (fVar14 * fVar11 <= param_4 * fVar16) {
        fVar12 = param_4 * fVar16;
      }
      iVar1 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      plVar7 = (long *)param_5[10];
      if (plVar7 == (long *)0x0) goto LAB_01bded0c;
      fVar10 = fVar10 * fVar12;
      iVar13 = *(int *)((long)param_5 + 0x74);
      fVar15 = (float)(int)((fVar10 / SQRT((param_3 - fVar17) * (param_3 - fVar17) +
                                           (fVar8 - fVar9) * (fVar8 - fVar9) +
                                           (param_2 - fVar15) * (param_2 - fVar15))) * 0.125 *
                           (float)iVar1) * 8.0;
      iVar1 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      fVar17 = (float)iVar1;
      if (fVar15 <= (float)iVar1) {
        fVar17 = fVar15;
      }
      fVar8 = fVar17;
      if (fVar15 < (float)iVar13) {
        fVar8 = (float)iVar13;
      }
      if (param_5[6] == 0) goto LAB_01bded0c;
      lVar6 = param_5[8];
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                (param_5[6],0);
      if ((param_5[6] == 0) || (fVar15 = fVar10, FUN_03929354(param_5[6],0), lVar6 == 0))
      goto LAB_01bded0c;
      fVar14 = 0.5;
      fVar16 = fVar8 + -2.0;
      FUN_038f0978((fVar8 * fVar10 * 0.5 * fVar17) / fVar16,lVar6,0);
      if (param_5[6] == 0) goto LAB_01bded0c;
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                (param_5[6],0);
      if (param_5[6] == 0) goto LAB_01bded0c;
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                (param_5[6],0);
      plVar7 = (long *)param_5[10];
      if (plVar7 == (long *)0x0) goto LAB_01bded0c;
      iVar1 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      plVar7 = (long *)param_5[10];
      if (plVar7 == (long *)0x0) goto LAB_01bded0c;
      iVar13 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      plVar7 = (long *)param_5[10];
      fVar17 = DAT_00b551bc;
      if (*(int *)((long)param_5 + 0x8c) != 0) {
        fVar17 = 0.0;
      }
      if (plVar7 == (long *)0x0) goto LAB_01bded0c;
      iVar2 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      plVar7 = (long *)param_5[10];
      if (plVar7 == (long *)0x0) goto LAB_01bded0c;
      iVar3 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (param_5[8] == 0) goto LAB_01bded0c;
      fVar14 = fVar16 * (fVar14 / fVar15);
      fVar15 = (float)(int)((fVar14 + 2.0) * 0.5);
      FUN_038f0e08((1.0 - (fVar15 + fVar15) / (float)iVar1) * 0.5,
                   (1.0 - fVar8 / (float)iVar13) * 0.5,param_5[8],0);
      if (param_5[0xd] == 0) goto LAB_01bded0c;
      fVar8 = (fVar14 - fVar17) / (float)iVar2;
      fVar15 = (fVar16 - fVar17) / (float)iVar3;
      fVar14 = 0.5 - fVar8 * 0.5;
      fVar17 = 0.5 - fVar15 * 0.5;
      FUN_038ff7d4(fVar14,fVar17,param_5[0xd],0);
      if (param_5[0xd] == 0) goto LAB_01bded0c;
      FUN_038ff8ec(fVar8,fVar15,param_5[0xd],0);
      lVar6 = param_5[9];
      if (lVar6 == 0) goto LAB_01bded0c;
      fVar17 = (1.0 - fVar15) - fVar17;
      *(undefined1 *)(lVar6 + 0xac) = 1;
      FUN_03241110(fVar14,fVar17,fVar8,fVar15,fVar14,fVar17,fVar8,fVar15,lVar6,0);
    }
  }
  if (param_5[8] != 0) {
    FUN_038f1b78(param_5[8],0);
    return;
  }
LAB_01bded0c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


