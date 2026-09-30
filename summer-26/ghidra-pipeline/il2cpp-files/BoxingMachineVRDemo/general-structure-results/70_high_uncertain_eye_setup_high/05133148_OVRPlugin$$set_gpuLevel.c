/*
FUNCTION_NAME: OVRPlugin$$set_gpuLevel
ENTRY_POINT: 05133148
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05133290) */

void OVRPlugin__set_gpuLevel(long param_1)

{
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *extraout_x1;
  long lVar4;
  ulong uVar5;
  long in_x9;
  ulong in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    if (!(bool)in_CY) goto LAB_051331cc;
    if (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != in_x9) goto LAB_051331cc;
    iVar1 = (**(code **)(param_1 + 0x228))(unaff_x24,*(undefined8 *)(param_1 + 0x230));
    uVar3 = (**(code **)(*unaff_x22 + 0x228))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x230));
    if (iVar1 != (int)uVar3) goto LAB_051331cc;
    FUN_0512f3a4(uVar3,unaff_x22);
    (**(code **)(*unaff_x24 + 0x6f8))(unaff_x24,unaff_x22);
LAB_05133038:
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05133084;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05133084:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_05133238;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_051330e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_051330e0:
    (*(code *)*puVar2)();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    unaff_x23 = FUN_0512fbac();
    if (unaff_x23 == 0) {
      OVRPlugin__set_occlusionMesh();
      goto LAB_05133038;
    }
    if (extraout_x1 == (long *)0x0) goto LAB_05133038;
    if (*(long *)(unaff_x23 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    unaff_x24 = *(long **)(*(long *)(unaff_x23 + 0x58) + 0x10);
    unaff_x22 = extraout_x1;
    if (unaff_x24 == (long *)0x0) {
LAB_051331cc:
      uVar5 = FUN_05133454(unaff_x22);
      if (((uVar5 & 1) == 0) || ((unaff_x20 != 0 && (*(int *)(unaff_x20 + 0x14) == 1)))) {
        FUN_051334f8(unaff_x23,unaff_x22);
      }
      goto LAB_05133038;
    }
    param_1 = *unaff_x24;
    in_x9 = *unaff_x28;
    in_x10 = (ulong)*(byte *)(in_x9 + 0x130);
    in_CY = *(byte *)(in_x9 + 0x130) <= *(byte *)(param_1 + 0x130);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_05133254;
    }
  }
LAB_05133238:
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05133254:
  (*(code *)*puVar2)();
  return;
}


