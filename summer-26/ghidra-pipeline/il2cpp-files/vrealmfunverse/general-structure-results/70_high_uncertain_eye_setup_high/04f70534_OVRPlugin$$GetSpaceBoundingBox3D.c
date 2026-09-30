/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox3D
ENTRY_POINT: 04f70534
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundingBox3D(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  *(undefined1 *)(unaff_x21 + 0xb74) = in_w8;
  puVar1 = System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TypeInfo;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TypeInfo
           ) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_04f705ac;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f705ac:
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) {
      FUN_04f70754();
      FUN_04f70798();
      return;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 != 0) {
      if ((*(char *)(lVar3 + 0x10) == '\0') || (*(long *)(lVar3 + 0x18) == 0)) {
        FUN_04f70754();
      }
      else {
        lVar3 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
              goto LAB_04f70650;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f70650:
        (*(code *)*puVar2)();
        FUN_04f707e0();
        *(undefined1 *)(unaff_x19 + 0x60) = 0;
      }
      FUN_04f62d40(&stack0x00000040);
      plVar6 = *(long **)(unaff_x19 + 0x70);
      if (plVar6 == (long *)0x0) {
        uStack0000000000000028 = uStack0000000000000048;
        uStack0000000000000020 = uStack0000000000000040;
        uStack0000000000000034 = uStack0000000000000054;
        uStack0000000000000038 = uStack0000000000000058;
        uStack000000000000002c = uStack000000000000004c;
        uStack0000000000000030 = uStack0000000000000050;
      }
      else {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)UnityEngine_InputSystem_UI_PointerModel_var) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_04f706f0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02b7654c(plVar6,*(long *)UnityEngine_InputSystem_UI_PointerModel_var,2);
LAB_04f706f0:
        (*(code *)*puVar2)(&stack0x00000020,plVar6,&stack0x00000040,puVar2[1]);
      }
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        uStack0000000000000014 = CONCAT44(uStack0000000000000038,uStack0000000000000034);
        uStack000000000000000c = uStack000000000000002c;
        FUN_04f89ad8(0x3f800000);
        *(undefined1 *)(unaff_x19 + 0x61) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


