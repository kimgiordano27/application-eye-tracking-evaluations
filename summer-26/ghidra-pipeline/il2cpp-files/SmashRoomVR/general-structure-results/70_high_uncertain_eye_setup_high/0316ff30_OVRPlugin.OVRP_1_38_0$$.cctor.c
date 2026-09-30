/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 0316ff30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0___cctor(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar14;
  
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x22) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0316ff7c;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ae9f78(param_2,*unaff_x22,0);
LAB_0316ff7c:
  uVar5 = (*(code *)*puVar6)(param_2,puVar6[1]);
  iVar2 = *(int *)(unaff_x20 + 0x80);
  lVar7 = *(long *)(unaff_x20 + 0x88);
  iVar1 = *(int *)(unaff_x20 + 0x90) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  *(int *)(unaff_x20 + 0x90) = iVar1 - iVar3 * iVar2;
  *(undefined4 *)(unaff_x20 + 0x94) = uVar5;
  if (lVar7 != 0) {
    lVar11 = 0;
    do {
      uVar9 = (uint)lVar11;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar9) {
        iVar2 = *(int *)(unaff_x20 + 0x80);
        iVar3 = *(int *)(unaff_x20 + 0x84);
        iVar1 = iVar2;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        iVar4 = 0;
        if (-1 < iVar3) {
          iVar4 = iVar1;
        }
        *(int *)(unaff_x20 + 0x84) = iVar4;
        if (lVar7 != 0) {
          lVar11 = 0;
          iVar4 = (*(int *)(unaff_x20 + 0x90) + iVar2) - iVar4;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar4 / iVar2;
          }
          uVar9 = iVar4 - iVar1 * iVar2;
          goto LAB_0316fea4;
        }
        break;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_03170010;
      lVar13 = *(long *)(unaff_x19 + 0x38);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03170010;
      lVar7 = *(long *)(lVar7 + lVar11 * 8 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_03170010;
      lVar13 = lVar13 + lVar11 * 0x10;
      uVar14 = *(undefined8 *)(lVar13 + 0x20);
      lVar7 = lVar7 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
      lVar11 = lVar11 + 1;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
      *(undefined8 *)(lVar7 + 0x20) = uVar14;
      lVar7 = *(long *)(unaff_x20 + 0x88);
    } while (lVar7 != 0);
  }
  goto LAB_0317000c;
  while( true ) {
    if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_03170010;
    lVar13 = *(long *)(unaff_x19 + 0x38);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_03170010;
    lVar7 = lVar7 + (long)(int)uVar9 * 0x10;
    uVar14 = *(undefined8 *)(lVar7 + 0x20);
    lVar13 = lVar13 + lVar11 * 0x10;
    lVar11 = lVar11 + 1;
    *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar13 + 0x20) = uVar14;
    lVar7 = *(long *)(unaff_x20 + 0x88);
    if (lVar7 == 0) break;
LAB_0316fea4:
    uVar8 = (uint)lVar11;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar8) {
      return;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_03170010:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar7 = *(long *)(lVar7 + lVar11 * 8 + 0x20);
    if (lVar7 == 0) break;
  }
LAB_0317000c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


