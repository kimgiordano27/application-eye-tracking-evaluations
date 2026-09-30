/*
FUNCTION_NAME: FUN_03b63aec
ENTRY_POINT: 03b63aec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03b63df0) */
/* WARNING: Removing unreachable block (ram,0x03b63e34) */

bool FUN_03b63aec(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_048395c5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_12542);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_12543);
    thunk_FUN_01efb3a4(Method_System_Collections_CompatibleComparer_GetHashCode__);
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_CompatibleComparer_GetHashCode__);
    DAT_048395c5 = 1;
  }
  puVar6 = Method_System_Collections_Specialized_CompatibleComparer_GetHashCode__;
  local_70 = 0;
  uStack_68 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  uVar9 = FUN_03b52f50(param_1 + 0x30,0);
  if ((uVar9 & 1) == 0) {
    uVar9 = FUN_03b63650(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),*param_2,
                         param_2[1]);
    if ((uVar9 & 1) != 0) {
LAB_03b63bac:
      bVar3 = true;
      goto LAB_03b63bb0;
    }
    if ((param_3 & 1) == 0) {
      return false;
    }
    local_70 = param_2[0xb];
    uStack_68 = param_2[0xc];
    if (0 < (int)((ulong)uStack_68 >> 0x20)) {
      iVar13 = 0;
      do {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        auVar17 = FUN_02616e1c(&local_70,iVar13,*(undefined8 *)puVar6);
        uVar9 = FUN_03b63650(uVar1,uVar2,auVar17._0_8_,auVar17._8_8_);
        if ((uVar9 & 1) != 0) goto LAB_03b63bac;
        iVar13 = iVar13 + 1;
      } while (iVar13 < uStack_68._4_4_);
    }
  }
  bVar3 = false;
LAB_03b63bb0:
  puVar7 = StringLiteral_12542;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar10 = (long *)FUN_02f121ac(param_1 + 0x10,*(undefined8 *)StringLiteral_12543);
  bVar16 = false;
LAB_03b63be4:
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03b63c34;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_03b63c34:
    uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_03b63de4;
      lVar12 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 == 0) goto LAB_03b63d60;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03b63c90;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar7,0);
LAB_03b63c90:
    auVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    local_80 = auVar17;
    uVar9 = FUN_03b52f50(local_80,0);
    if ((uVar9 & 1) == 0) {
      local_90 = param_2[9];
      uStack_88 = param_2[10];
      iVar13 = (int)((ulong)uStack_88 >> 0x20);
      if (0 < iVar13) {
        iVar15 = 0;
        while( true ) {
          uVar2 = local_80._8_8_;
          uVar1 = local_80._0_8_;
          auVar17 = FUN_02616e1c(&local_90,iVar15,*(undefined8 *)puVar6);
          uVar9 = FUN_03b63650(uVar1,uVar2,auVar17._0_8_,auVar17._8_8_);
          if ((uVar9 & 1) != 0) break;
          bVar8 = iVar13 + -1 == iVar15;
          iVar15 = iVar15 + 1;
          if (bVar8) goto LAB_03b63be4;
          local_90 = param_2[9];
          uStack_88 = param_2[10];
        }
        bVar16 = true;
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03b63dd8;
    }
  }
LAB_03b63d60:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_03b63dd8:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_03b63de4:
  return bVar3 || bVar16;
}


