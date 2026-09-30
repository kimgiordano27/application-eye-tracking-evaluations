/*
FUNCTION_NAME: FUN_01cbb780
ENTRY_POINT: 01cbb780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


float FUN_01cbb780(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_68 [12];
  float local_5c;
  float fStack_58;
  float local_54;
  long local_50;
  long *local_48;
  long *local_38;
  
  if ((DAT_03feda54 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1109);
    thunk_FUN_01ad9084(StringLiteral_1110);
                    /* try { // try from 01cbb7c4 to 01dbb7cf has its CatchHandler @ 01cbb7e0 */
    thunk_FUN_01ad9084(StringLiteral_1111);
    thunk_FUN_01ad9084(StringLiteral_1112);
    thunk_FUN_01ad9084(StringLiteral_1113);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01cbb7c4 with catch @ 01cbb7e0
                        */
    thunk_FUN_01ad9084(StringLiteral_1114);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_1115);
    DAT_03feda54 = 1;
  }
  local_38 = (long *)0x0;
  local_50 = 0;
  local_48 = (long *)0x0;
  if (param_4 == 0) goto LAB_01cbbae8;
  uVar3 = FUN_01ed84c4(param_4,&local_38,*(undefined8 *)StringLiteral_1112);
  if ((uVar3 & 1) == 0) {
LAB_01cbb970:
    uVar3 = FUN_01ed84c4(param_4,&local_50,*(undefined8 *)StringLiteral_1113);
    if ((uVar3 & 1) == 0) {
      return 0.0;
    }
    if (local_50 == 0) {
LAB_01cbbae8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_038fde78(auStack_68,local_50,0);
LAB_01cbb9a4:
    fVar10 = (local_5c + local_5c) * (fStack_58 + fStack_58) * (local_54 + local_54);
  }
  else {
    if (local_38 == (long *)0x0) goto LAB_01cbbae8;
    uVar3 = FUN_0395b350(local_38,0);
    plVar5 = local_38;
    if ((uVar3 & 1) == 0) goto LAB_01cbb970;
    if (local_38 == (long *)0x0) {
      return 0.0;
    }
    lVar6 = *local_38;
    bVar1 = *(byte *)(lVar6 + 0x130);
    bVar2 = *(byte *)(*(long *)StringLiteral_1114 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_1114)) {
      bVar2 = *(byte *)(*(long *)StringLiteral_1109 + 0x130);
      if ((bVar2 <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)StringLiteral_1109))
      goto LAB_01cbba48;
      bVar2 = *(byte *)(*(long *)StringLiteral_1115 + 0x130);
      if ((bVar2 <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)StringLiteral_1115))
      {
        fVar7 = (float)FUN_0395c4f4(local_38,0);
        fVar8 = (float)FUN_0395c4f4(plVar5,0);
        fVar9 = (float)FUN_0395c4f4(plVar5,0);
        fVar10 = (float)FUN_01cbd9c0(param_4);
        return fVar7 * DAT_00b553f0 * fVar8 * fVar9 * fVar10;
      }
      bVar2 = *(byte *)(*(long *)StringLiteral_1110 + 0x130);
      if (bVar1 < bVar2) {
        return 0.0;
      }
      if (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_1110)
      {
        return 0.0;
      }
      if (local_38 == (long *)0x0) goto LAB_01cbbae8;
      fVar7 = (float)FUN_0395bfbc(local_38,0);
      fVar8 = (float)FUN_0395bfbc(plVar5,0);
      fVar9 = (float)FUN_0395c044(plVar5,0);
      fVar11 = fVar7 * fVar7 * DAT_00b550a8;
      fVar10 = (float)FUN_01cbd9c0(param_4);
      param_3 = fVar8 * fVar7 * fVar7 * DAT_00b553f0 + fVar11 * fVar9;
    }
    else {
      uVar4 = FUN_0395bd84(local_38,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_03922f24(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        lVar6 = FUN_0395bd84(plVar5,0);
        if (lVar6 == 0) goto LAB_01cbbae8;
        UnityEngine_UIElements_UIR_GradientRemap___ctor(auStack_68,lVar6,0);
        goto LAB_01cbb9a4;
      }
      uVar3 = FUN_01ed84c4(param_4,&local_48,*(undefined8 *)StringLiteral_1111);
      if ((uVar3 & 1) == 0) {
        return 0.0;
      }
      plVar5 = local_48;
      if (local_48 == (long *)0x0) goto LAB_01cbbae8;
LAB_01cbba48:
      fVar7 = (float)FUN_0395c284(plVar5,0);
      fVar10 = (float)FUN_01cbd9c0(param_4);
      param_3 = param_3 * fVar7 * param_2;
    }
    fVar10 = fVar10 * param_3;
  }
  return fVar10;
}


