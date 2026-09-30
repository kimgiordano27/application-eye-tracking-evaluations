/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$Slice
ENTRY_POINT: 045c21f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__Slice
          (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long *param_6,ulong param_7,long param_8)

{
  float fVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  double extraout_x1;
  undefined8 uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  undefined4 uVar6;
  double unaff_d9;
  long lVar7;
  double unaff_d10;
  double dVar8;
  
  FUN_045c1e94(param_3,param_4,param_5,param_6,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xc0));
  plVar3 = param_6 + 7;
  if ((char)*plVar3 != '\0') {
    if (*(char *)((long)param_6 + 0x84) == '\0') {
      if (DAT_06db7305 == '\0') {
        FUN_02d965b8(&DAT_06b35a68);
        DAT_06db7305 = '\x01';
      }
      lVar7 = param_6[0xc];
      dVar8 = (double)param_6[0xd];
      *(float *)((long)param_6 + 0x94) = unaff_s8;
      if (*(int *)(DAT_06b35a68 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      dVar8 = (double)FUN_054e9228(dVar8 + (double)unaff_s8,lVar7,0);
      fVar4 = 1.0;
      param_6[0xd] = (long)dVar8;
      if ((double)param_6[0xc] != 0.0) {
        fVar4 = (float)(dVar8 / (double)param_6[0xc]);
      }
      lVar7 = *(long *)(param_8 + 0x20);
      *(float *)(param_6 + 0x10) = fVar4;
      uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70);
      if ((param_7 & 1) == 0) {
        lVar7 = param_6[0x12];
        FUN_04324b54(plVar3,uVar2);
        uVar6 = (**(code **)(*param_6 + 0x198))
                          ((int)lVar7,extraout_var_00,
                           *(float *)(param_6 + 0x10) * (float)(double)param_6[0xc],unaff_s8,
                           0x7f800000,param_6,param_6 + 0x18,*(undefined8 *)(*param_6 + 0x1a0));
      }
      else {
        uVar6 = *(undefined4 *)((long)param_6 + 0x8c);
        FUN_04324b54(plVar3,uVar2);
        uVar6 = (**(code **)(*param_6 + 0x178))
                          (uVar6,extraout_var,(int)param_6[0x10],param_6,
                           *(undefined8 *)(*param_6 + 0x180));
      }
      *(undefined4 *)(param_6 + 0x12) = uVar6;
      if (*(char *)((long)param_6 + 0x24) == '\0') {
        *(undefined4 *)(param_6 + 0x11) = uVar6;
      }
      else {
        fVar5 = 1.0 - *(float *)(param_6 + 5);
        fVar4 = 1.0;
        if (fVar5 <= 1.0) {
          fVar4 = fVar5;
        }
        fVar1 = 0.0;
        if (0.0 <= fVar5) {
          fVar1 = fVar4;
        }
        uVar6 = (**(code **)(*param_6 + 0x178))
                          ((int)param_6[0x11],uVar6,fVar1,param_6,*(undefined8 *)(*param_6 + 0x180))
        ;
        *(undefined4 *)(param_6 + 0x11) = uVar6;
      }
    }
    else {
      if (param_6[6] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 045c2238 to 046c223b has its CatchHandler @ 045c2258 */
                    /* try { // try from 045c223c to 046c223f has its CatchHandler @ 045c2250 */
                    /* try { // try from 045c2240 to 046c227b has its CatchHandler @ 045c1f34 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 045c2188 with catch @ 045c224c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 045c223c with catch @ 045c2250
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 045c21ac with catch @ 045c2254
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 045c2238 with catch @ 045c2258
                        */
      if ((*(int *)(param_6[6] + 0x20) == 0) &&
         (FUN_04324b54(plVar3,*(undefined8 *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x70)),
         (double)param_6[0xe] + unaff_d9 < unaff_d10 - extraout_x1)) {
        FUN_04ba82d4((int)param_6[0x11],plVar3,
                     *(undefined8 *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x30));
      }
    }
  }
  *(undefined4 *)((long)param_6 + 0xac) = 0;
  return (int)param_6[0x11];
}


