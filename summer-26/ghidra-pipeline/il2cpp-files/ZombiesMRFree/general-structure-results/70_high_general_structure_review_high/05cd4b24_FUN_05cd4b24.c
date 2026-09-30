/*
FUNCTION_NAME: FUN_05cd4b24
ENTRY_POINT: 05cd4b24
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


float FUN_05cd4b24(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_150 [2];
  undefined8 uStack_13c;
  undefined8 local_130 [2];
  undefined8 uStack_11c;
  undefined8 local_110 [2];
  undefined8 uStack_fc;
  undefined8 local_f0 [2];
  undefined8 uStack_dc;
  undefined8 local_d0 [2];
  undefined8 uStack_bc;
  undefined8 local_b0 [2];
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_7c;
  long local_68;
  
                    /* catch() { ... } // from try @ 05cd4ab8 with catch @ 05cd4b24 */
                    /* catch() { ... } // from try @ 05cd4a2c with catch @ 05cd4b28 */
                    /* catch() { ... } // from try @ 05cd4948 with catch @ 05cd4b2c */
                    /* catch() { ... } // from try @ 05cd4af4 with catch @ 05cd4b30 */
                    /* catch() { ... } // from try @ 05cd49a8 with catch @ 05cd4b34 */
                    /* catch() { ... } // from try @ 05cd4a1c with catch @ 05cd4b38
                       catch() { ... } // from try @ 05cd4a58 with catch @ 05cd4b38
                       catch() { ... } // from try @ 05cd4af8 with catch @ 05cd4b38 */
                    /* try { // try from 05cd4b4c to 05dd4b4f has its CatchHandler @ 05cd4b68 */
                    /* try { // try from 05cd4b50 to 05dd4b87 has its CatchHandler @ 05cd48ac */
  if ((DAT_07398644 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb6ba8);
                    /* catch() { ... } // from try @ 05cd4b4c with catch @ 05cd4b68 */
    FUN_02fe925c(PTR_DAT_06fb4b60);
    DAT_07398644 = 1;
  }
  local_68 = 0;
  if (param_3 != (long *)0x0) {
    lVar3 = *param_3;
                    /* try { // try from 05cd4b88 to 05dd4b93 has its CatchHandler @ 05cd4b94 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 05cd4b88 with catch @ 05cd4b94 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto LAB_05cd4bd4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(param_3,*(long *)PTR_DAT_06fb4b60,0xd);
LAB_05cd4bd4:
    uVar4 = (*(code *)*puVar2)(param_3,&local_68,puVar2[1]);
    puVar1 = PTR_DAT_06fb6ba8;
    fVar9 = 0.0;
    if ((uVar4 & 1) != 0) {
      if (param_2 == 0) goto LAB_05cd4d6c;
      uVar4 = (ulong)*(uint *)(param_2 + 0x18);
      if (0 < (long)((uVar4 << 0x20) + -0x200000000)) {
        uVar7 = 0;
        fVar9 = 0.0;
        lVar6 = 0x200000000;
        lVar3 = 0x100000000;
        do {
          if (uVar4 <= uVar7) {
OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          if (local_68 == 0) goto LAB_05cd4d6c;
          FUN_05d386d0(local_b0,local_68,*(undefined4 *)(param_2 + 0x20 + uVar7 * 4),0);
          local_90 = local_b0[0];
          uStack_7c = uStack_9c;
          if ((ulong)*(uint *)(param_2 + 0x18) <= uVar7 + 1)
          goto OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke;
          if (local_68 == 0) goto LAB_05cd4d6c;
          FUN_05d386d0(local_d0,local_68,*(undefined4 *)(param_2 + (lVar3 >> 0x1e) + 0x20),0);
          local_b0[0] = local_d0[0];
          uStack_9c = uStack_bc;
          if ((ulong)*(uint *)(param_2 + 0x18) <= uVar7 + 2)
          goto OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke;
          if (local_68 == 0) goto LAB_05cd4d6c;
          FUN_05d386d0(local_f0,local_68,*(undefined4 *)(param_2 + (lVar6 >> 0x1e) + 0x20),0);
          local_d0[0] = local_f0[0];
          uStack_bc = uStack_dc;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          local_110[0] = local_90;
          uStack_fc = uStack_7c;
          local_130[0] = local_b0[0];
          uStack_11c = uStack_9c;
          local_150[0] = local_d0[0];
          uStack_13c = uStack_bc;
          fVar8 = (float)FUN_05cd4858(local_110,local_130,local_150);
          uVar7 = uVar7 + 1;
          fVar9 = fVar9 + fVar8;
          lVar3 = lVar3 + 0x100000000;
          uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
          lVar6 = lVar6 + 0x100000000;
        } while ((long)uVar7 < (long)((int)*(ulong *)(param_2 + 0x18) + -2));
      }
    }
    return fVar9;
  }
LAB_05cd4d6c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


