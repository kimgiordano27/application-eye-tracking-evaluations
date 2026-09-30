/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsli_n_u16
ENTRY_POINT: 01fe8bb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fe8d58) */
/* WARNING: Removing unreachable block (ram,0x01fe8f38) */
/* WARNING: Removing unreachable block (ram,0x01fe8f30) */

void Unity_Burst_Intrinsics_Arm_Neon__vsli_n_u16(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  char cStack000000000000000c;
  
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
  do {
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01fe8c0c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
LAB_01fe8c0c:
    uVar9 = (*(code *)*puVar5)();
    if ((uVar9 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_00d6225c();
      if (plVar6 == (long *)0x0) goto LAB_01fe8d4c;
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 == 0) goto LAB_01fe8d24;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_01fe8c6c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
LAB_01fe8c6c:
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *plVar6;
    bVar1 = *(byte *)(*(long *)puVar2 + 300);
    if ((*(byte *)(lVar8 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar6);
    }
    (**(code **)(lVar8 + 0x178))(plVar6,*(undefined8 *)(lVar8 + 0x180));
    (**(code **)(*unaff_x20 + 0x318))();
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *unaff_x25) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto FUN_01fe8d40;
    }
  }
LAB_01fe8d24:
  puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x25,0);
FUN_01fe8d40:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_01fe8d4c:
  plVar6 = (long *)(**(code **)(*unaff_x20 + 0x398))();
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_01fe8dd0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x24,1);
LAB_01fe8dd0:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    uVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar4);
    plVar6 = (long *)(**(code **)(*unaff_x20 + 0x398))();
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01fe8e58;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x24,0);
LAB_01fe8e58:
      (*(code *)*puVar5)(plVar6,uVar7,0,puVar5[1]);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_017d75a8(uVar11,&stack0x0000000c,0);
      puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03780807 == '\0') {
        thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
        DAT_03780807 = '\x01';
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar2;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x20);
      if (cStack000000000000000c != '\0') {
        thunk_FUN_00d56f10(uVar11,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


