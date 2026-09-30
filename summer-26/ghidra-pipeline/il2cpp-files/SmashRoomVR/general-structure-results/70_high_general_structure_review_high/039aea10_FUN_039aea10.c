/*
FUNCTION_NAME: FUN_039aea10
ENTRY_POINT: 039aea10
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_039aea10(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffc7bf & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2391);
    thunk_FUN_01ad9084(StringLiteral_2392);
    thunk_FUN_01ad9084(StringLiteral_2393);
    thunk_FUN_01ad9084(PTR_DAT_03d9d588);
    thunk_FUN_01ad9084(PTR_DAT_03dadc08);
    thunk_FUN_01ad9084(PTR_DAT_03dadc10);
    thunk_FUN_01ad9084(StringLiteral_2397);
    thunk_FUN_01ad9084(StringLiteral_2398);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    DAT_03ffc7bf = 1;
  }
  uVar6 = FUN_039ad440(param_5);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_03d9d588;
  uVar7 = FUN_0391f968(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
LAB_039aeb34:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar8 = FUN_039af114();
    if (lVar8 == 0) goto LAB_039aed5c;
    FUN_03904d9c(lVar8,0);
  }
  else {
    lVar8 = FUN_039ad440(param_5);
    if (lVar8 == 0) goto LAB_039aed5c;
    UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(lVar8,0);
    if (param_3 < 0.0) goto LAB_039aeb34;
    lVar8 = FUN_039ad440(param_5);
    if (lVar8 == 0) goto LAB_039aed5c;
    UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(lVar8,0);
    if (param_4 < 0.0) goto LAB_039aeb34;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_039af114();
    (**(code **)(*param_5 + 1000))(param_5,uVar6,*(undefined8 *)(*param_5 + 0x3f0));
  }
  puVar5 = PTR_DAT_03dadc08;
  puVar4 = StringLiteral_2393;
  puVar3 = StringLiteral_2391;
  puVar2 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
  if (*(int *)(*(long *)StringLiteral_2393 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar8 = FUN_0246f960(*(undefined8 *)puVar3);
  uVar6 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar6 = FUN_0304eec0(uVar6,0);
  FUN_0391c6f8(param_5,uVar6,lVar8,0);
  puVar3 = PTR_DAT_03dadc10;
  puVar2 = StringLiteral_2398;
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      iVar14 = 0;
      do {
        lVar9 = FUN_02b59714(lVar8,iVar14,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar6 = FUN_039af114();
        if (lVar9 == 0) goto LAB_039aed5c;
        uVar15 = *(undefined8 *)puVar3;
        lVar10 = thunk_FUN_01afa9e0(lVar9,uVar15);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(lVar9,uVar15);
        }
        lVar10 = *(long *)puVar3;
        plVar11 = (long *)thunk_FUN_01afa9e0(lVar9,lVar10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(lVar9,lVar10);
        }
        lVar9 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_039aec98;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ae9f78(plVar11,lVar10,0);
LAB_039aec98:
        (*(code *)*puVar12)(plVar11,uVar6,puVar12[1]);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar8 + 0x18));
    }
    puVar2 = StringLiteral_2392;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_0246faa0(lVar8,*(undefined8 *)puVar2);
    lVar8 = FUN_039add2c(param_5);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar6 = FUN_039af114();
    if (lVar8 != 0) {
      FUN_03af8c9c(lVar8,uVar6,0);
      return;
    }
  }
LAB_039aed5c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


