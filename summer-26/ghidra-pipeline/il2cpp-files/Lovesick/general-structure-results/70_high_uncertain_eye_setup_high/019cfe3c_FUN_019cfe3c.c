/*
FUNCTION_NAME: FUN_019cfe3c
ENTRY_POINT: 019cfe3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


float FUN_019cfe3c(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
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
  
  if ((DAT_0377a71f & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ee740);
    thunk_FUN_00d48444(StringLiteral_6481);
    DAT_0377a71f = 1;
  }
  local_68 = 0;
  if (param_3 != (long *)0x0) {
    lVar3 = *param_3;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_6481) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto LAB_019cfeec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724(param_3,*(long *)StringLiteral_6481,0xd);
LAB_019cfeec:
    uVar4 = (*(code *)*puVar2)(param_3,&local_68,puVar2[1]);
    puVar1 = PTR_DAT_033ee740;
    fVar8 = 0.0;
    if ((uVar4 & 1) != 0) {
      if (param_2 == 0) goto LAB_019d0078;
      uVar4 = (ulong)*(uint *)(param_2 + 0x18);
      if (0 < (long)((uVar4 << 0x20) + -0x200000000)) {
        uVar6 = 0;
        fVar8 = 0.0;
        lVar3 = 0x200000000;
        do {
          if (uVar4 <= uVar6) {
LAB_019d0074:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (local_68 == 0) goto LAB_019d0078;
          OVRPlugin__EraseSpace(local_b0,local_68,*(undefined4 *)(param_2 + uVar6 * 4 + 0x20),0);
          local_90 = local_b0[0];
          uStack_7c = uStack_9c;
          if ((ulong)*(uint *)(param_2 + 0x18) <= uVar6 + 1) goto LAB_019d0074;
          if (local_68 == 0) goto LAB_019d0078;
          OVRPlugin__EraseSpace(local_d0,local_68,*(undefined4 *)(param_2 + uVar6 * 4 + 0x24),0);
          local_b0[0] = local_d0[0];
          uStack_9c = uStack_bc;
          if ((ulong)*(uint *)(param_2 + 0x18) <= uVar6 + 2) goto LAB_019d0074;
          if (local_68 == 0) goto LAB_019d0078;
          OVRPlugin__EraseSpace
                    (local_f0,local_68,*(undefined4 *)(param_2 + (lVar3 >> 0x1e) + 0x20),0);
          local_d0[0] = local_f0[0];
          uStack_bc = uStack_dc;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          local_110[0] = local_90;
          uStack_fc = uStack_7c;
          local_130[0] = local_b0[0];
          uStack_11c = uStack_9c;
          local_150[0] = local_d0[0];
          uStack_13c = uStack_bc;
          fVar7 = (float)FUN_019cfa08(local_110,local_130,local_150);
          uVar4 = (ulong)*(uint *)(param_2 + 0x18);
          uVar6 = uVar6 + 1;
          fVar8 = fVar8 + fVar7;
          lVar3 = lVar3 + 0x100000000;
        } while ((long)uVar6 < (long)((uVar4 << 0x20) + -0x200000000) >> 0x20);
      }
    }
    return fVar8;
  }
LAB_019d0078:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


