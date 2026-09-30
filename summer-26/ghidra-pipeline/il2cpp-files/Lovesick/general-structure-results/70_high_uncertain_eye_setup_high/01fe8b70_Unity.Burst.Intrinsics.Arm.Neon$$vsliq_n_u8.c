/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsliq_n_u8
ENTRY_POINT: 01fe8b70
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

void Unity_Burst_Intrinsics_Arm_Neon__vsliq_n_u8(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar14;
  long *unaff_x24;
  char cStack000000000000000c;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_01fe8b94;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_01fe8b94:
  puVar4 = StringLiteral_10310;
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01fe8c0c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,lVar10,0);
LAB_01fe8c0c:
    uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar12 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)puVar4);
      if (plVar7 == (long *)0x0) goto LAB_01fe8d4c;
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 == 0) goto LAB_01fe8d24;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_01fe8c6c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,lVar10,1);
LAB_01fe8c6c:
    plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *plVar8;
    bVar1 = *(byte *)(*(long *)puVar2 + 300);
    if ((*(byte *)(lVar10 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar8);
    }
    (**(code **)(lVar10 + 0x178))(plVar8,*(undefined8 *)(lVar10 + 0x180));
    (**(code **)(*unaff_x20 + 0x318))();
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto FUN_01fe8d40;
    }
  }
LAB_01fe8d24:
  puVar6 = (undefined8 *)FUN_00d59724(plVar7,lVar10,0);
FUN_01fe8d40:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_01fe8d4c:
  plVar7 = (long *)(**(code **)(*unaff_x20 + 0x398))();
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_01fe8dd0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x24,1);
LAB_01fe8dd0:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar5);
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x398))();
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x24) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01fe8e58;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x24,0);
LAB_01fe8e58:
      (*(code *)*puVar6)(plVar7,uVar9,0,puVar6[1]);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_017d75a8(uVar14,&stack0x0000000c,0);
      puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      *(undefined8 *)(unaff_x19 + 0x30) = uVar9;
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03780807 == '\0') {
        thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
        DAT_03780807 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar2;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x20);
      if (cStack000000000000000c != '\0') {
        thunk_FUN_00d56f10(uVar14,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


