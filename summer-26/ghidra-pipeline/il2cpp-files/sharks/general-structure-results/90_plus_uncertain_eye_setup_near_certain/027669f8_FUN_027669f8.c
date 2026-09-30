/*
FUNCTION_NAME: FUN_027669f8
ENTRY_POINT: 027669f8
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_027669f8(long param_1,uint param_2,int param_3,undefined8 *param_4,long *param_5,
                 long param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar8 = param_2 + param_3 + -1;
  if ((int)param_2 <= iVar8) {
    if (param_1 == 0) {
LAB_02766b5c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    do {
      uVar1 = param_2 + ((int)(iVar8 - param_2) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar3 = param_1 + (long)(int)uVar1 * 0x20;
      uVar15 = *(undefined8 *)(lVar3 + 0x28);
      uVar13 = *(undefined8 *)(lVar3 + 0x20);
      uVar11 = *(undefined8 *)(lVar3 + 0x38);
      uVar9 = *(undefined8 *)(lVar3 + 0x30);
      uVar16 = param_4[1];
      uVar14 = *param_4;
      uVar12 = param_4[3];
      uVar10 = param_4[2];
      if (param_5 == (long *)0x0) goto LAB_02766b5c;
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4(lVar3);
      }
      lVar5 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0185dba8(param_5,lVar3,0);
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe:
      local_90 = uVar14;
      uStack_88 = uVar16;
      uStack_80 = uVar10;
      uStack_78 = uVar12;
      local_70 = uVar13;
      uStack_68 = uVar15;
      uStack_60 = uVar9;
      uStack_58 = uVar11;
      iVar2 = (*(code *)*puVar4)(param_5,&local_70,&local_90,puVar4[1]);
      if (iVar2 == 0) {
        return uVar1;
      }
      if (iVar2 < 0) {
        param_2 = uVar1 + 1;
      }
      else {
        iVar8 = uVar1 - 1;
      }
    } while ((int)param_2 <= iVar8);
  }
  return ~param_2;
}


