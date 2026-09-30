/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$TryCopyTo
ENTRY_POINT: 045c2618
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>__TryCopyTo
          (float param_1,double param_2,undefined8 param_3,long *param_4,long param_5)

{
  byte bVar1;
  undefined4 extraout_var;
  ulong uVar2;
  double extraout_x1;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  
  if ((DAT_06db7303 & 1) == 0) {
    FUN_02d965b8(&DAT_06b35a68);
    DAT_06db7303 = 1;
  }
  FUN_045c23f0(param_2,param_3,param_4,
               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xe8));
  dVar9 = DAT_010fc950;
  plVar4 = param_4 + 7;
  lVar3 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  if (((char)*plVar4 == '\0') || (*(char *)((long)param_4 + 0x84) != '\0')) {
    if (param_4[6] == 0) goto LAB_045c2854;
    if (((*(int *)(param_4[6] + 0x20) == 0) && (*(char *)((long)param_4 + 0x84) != '\0')) &&
       (FUN_04324b54(plVar4,*(undefined8 *)(lVar3 + 0x70)), DAT_010fbb40 < param_2 - extraout_x1)) {
      FUN_04ba82d4((int)param_4[0x11],plVar4,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x30));
    }
  }
  else {
    dVar8 = (double)param_4[0xc];
    *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
    if (dVar9 < dVar8) {
      dVar9 = (double)param_4[10];
      if (*(int *)(DAT_06b35a68 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar6 = (float)((param_2 - dVar9) / dVar8);
      if (DAT_06db7306 == '\0') {
        FUN_02d965b8(&DAT_06b6ee38);
        FUN_02d965b8(&DAT_06b35a68);
        DAT_06db7306 = '\x01';
      }
      fVar5 = 0.0;
      if ((0.0 <= fVar6) && (fVar5 = 1.0, fVar6 <= 1.0)) {
        fVar5 = fVar6;
      }
      lVar3 = *(long *)(param_5 + 0x20);
      *(float *)(param_4 + 0x10) = fVar5;
      lVar3 = *(long *)(lVar3 + 0xc0);
    }
    uVar7 = *(undefined4 *)((long)param_4 + 0x8c);
    FUN_04324b54(plVar4,*(undefined8 *)(lVar3 + 0x70));
    uVar7 = (**(code **)(*param_4 + 0x178))
                      (uVar7,extraout_var,(int)param_4[0x10],param_4,
                       *(undefined8 *)(*param_4 + 0x180));
    *(undefined4 *)(param_4 + 0x12) = uVar7;
    if (*(char *)((long)param_4 + 0x24) != '\0') {
      uVar7 = (**(code **)(*param_4 + 0x178))
                        ((int)param_4[0x11],uVar7,param_1 / *(float *)(param_4 + 5),param_4,
                         *(undefined8 *)(*param_4 + 0x180));
    }
    lVar3 = *(long *)(param_5 + 0x20);
    *(undefined4 *)(param_4 + 0x11) = uVar7;
    uVar2 = FUN_04324b54(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
    if (param_4[6] == 0) {
LAB_045c2854:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    bVar1 = (**(code **)(*param_4 + 0x1a8))
                      (uVar7,uVar2 >> 0x20,
                       *(undefined4 *)
                        (&DAT_010fc400 + (ulong)(*(int *)(param_4[6] + 0x20) == 0) * 4),param_4,
                       *(undefined8 *)(*param_4 + 0x1b0));
    *(byte *)((long)param_4 + 0x84) = bVar1 & 1;
  }
  *(undefined4 *)((long)param_4 + 0xac) = 0;
  return (int)param_4[0x11];
}


