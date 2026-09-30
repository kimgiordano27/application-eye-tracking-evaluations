/*
FUNCTION_NAME: FUN_020c1d8c
ENTRY_POINT: 020c1d8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020c2268) */
/* WARNING: Removing unreachable block (ram,0x020c2254) */

void FUN_020c1d8c(int *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 local_80;
  int *piStack_78;
  int **local_70;
  char local_64 [4];
  undefined1 local_60 [16];
  int local_4c;
  int *local_48;
  
  local_48 = param_1;
  if ((DAT_03780eb7 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<uint,_SimpleTuple<ProBuilderMesh,_Face>>__ctor__
                      );
    thunk_FUN_00d48444(System_SystemException_TypeInfo);
    DAT_03780eb7 = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<uint,_SimpleTuple<ProBuilderMesh,_Face>>__ctor__;
  puVar2 = System_SystemException_TypeInfo;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_64[0] = '\0';
  local_4c = *param_1;
  lVar8 = *(long *)(param_1 + 8);
  if (local_4c == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    local_4c = -1;
    *param_1 = -1;
LAB_020c1e9c:
    FUN_016a1990(local_60,0);
    auVar11 = local_60;
  }
  else {
    auVar11 = ZEXT816(0);
    if (local_4c == 1) goto LAB_020c1f48;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar11 = ZEXT816(0);
    if (*(char *)(lVar8 + 0x5d) == '\0') {
      lVar4 = FUN_020bc6f4(lVar8,param_1[10],*(undefined8 *)(param_1 + 0xc),
                           *(undefined8 *)(param_1 + 0xe));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_60 = FUN_017e7d94(lVar4,0,0);
      uVar5 = FUN_016a1974(local_60,0);
      piVar1 = local_48;
      if ((uVar5 & 1) == 0) {
        local_4c = 0;
        *local_48 = 0;
        *(undefined1 (*) [16])(local_48 + 0x12) = local_60;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_010bbddc(piVar1 + 2,local_60,local_48,*(undefined8 *)puVar3);
        return;
      }
      goto LAB_020c1e9c;
    }
  }
  local_60 = auVar11;
  if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar9 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
  lVar4 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  plVar6 = (long *)**(long **)(lVar4 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,0x8b,*(undefined8 *)(*plVar6 + 0x180));
  *(undefined8 *)(local_48 + 0x10) = uVar7;
  param_1 = local_48;
  auVar11 = local_60;
LAB_020c1f48:
  lVar4 = 0;
  piStack_78 = &local_4c;
  local_70 = &local_48;
  local_80 = 0;
  local_60 = auVar11;
  if (local_4c != 1) goto LAB_020c209c;
  local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
  lVar4 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_4c = -1;
  *param_1 = -1;
  do {
    FUN_016a1990(local_60,0);
LAB_020c209c:
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(char *)(lVar8 + 0x5e) != '\0') {
LAB_020c2184:
      iVar10 = 0xe;
      goto LAB_020c21a8;
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x48);
    local_64[0] = '\0';
    FUN_017d75a8(uVar7,local_64,0);
    if (*(char *)(lVar8 + 0x5e) == '\0') {
      lVar4 = FUN_020be824(lVar8,*(undefined8 *)(lVar8 + 0xa8),*(undefined8 *)(local_48 + 0x10),
                           *(undefined8 *)(local_48 + 0xe));
      *(long *)(lVar8 + 0xa8) = lVar4;
      iVar10 = 0xc;
    }
    else {
      iVar10 = 0xb;
    }
    if ((local_4c < 0) && (local_64[0] != '\0')) {
      thunk_FUN_00d56f10(uVar7,0);
    }
    if ((iVar10 != 0) && (iVar10 != 0xc)) {
      if (iVar10 == 0xb) goto LAB_020c2184;
      goto LAB_020c21a8;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar11 = FUN_017e7d94(lVar4,0,0);
    local_60 = auVar11;
    uVar5 = FUN_016a1974(local_60,0);
    piVar1 = local_48;
  } while ((uVar5 & 1) != 0);
  local_4c = 1;
  *local_48 = 1;
  *(undefined1 (*) [16])(local_48 + 0x12) = local_60;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_010bbddc(piVar1 + 2,local_60,local_48,*(undefined8 *)puVar3);
  iVar10 = 6;
LAB_020c21a8:
  FUN_00c581a8(&local_80);
  if ((iVar10 == 0xe) || (iVar10 == 0)) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x30);
    local_64[0] = '\0';
    FUN_017d75a8(uVar7,local_64,0);
    FUN_020bb3b0(lVar8);
    if (*(int *)(lVar8 + 0x58) < 5) {
      *(undefined4 *)(lVar8 + 0x58) = 5;
    }
    if ((local_4c < 0) && (local_64[0] != '\0')) {
      thunk_FUN_00d56f10(uVar7,0);
    }
    *local_48 = -2;
    local_48[0x10] = 0;
    local_48[0x11] = 0;
    piVar1 = local_48 + 2;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_016a2130(piVar1,0);
  }
  return;
}


