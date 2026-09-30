/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsliq_n_s64
ENTRY_POINT: 01fe8af0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fe8d58) */
/* WARNING: Removing unreachable block (ram,0x01fe8f38) */
/* WARNING: Removing unreachable block (ram,0x01fe8f30) */

void Unity_Burst_Intrinsics_Arm_Neon__vsliq_n_s64(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  long *unaff_x21;
  long *unaff_x24;
  char cStack000000000000000c;
  
  puVar6 = (undefined8 *)FUN_00d59724();
  uVar5 = (*(code *)*puVar6)();
  plVar7 = (long *)thunk_FUN_00d62348(*unaff_x20);
  puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (plVar7 != (long *)0x0) {
    FUN_01747cc8(plVar7,uVar5,0);
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01fe8b94;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01fe8b94:
    puVar4 = StringLiteral_10310;
    plVar8 = (long *)(*(code *)*puVar6)();
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01fe8c0c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar8,lVar11,0);
LAB_01fe8c0c:
      uVar13 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if ((uVar13 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar4);
        if (plVar8 == (long *)0x0) goto LAB_01fe8d4c;
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar4;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 == 0) goto LAB_01fe8d24;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_01fe8d0c;
      }
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_01fe8c6c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar8,lVar11,1);
LAB_01fe8c6c:
      plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *plVar9;
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(lVar11 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      uVar10 = (**(code **)(lVar11 + 0x178))(plVar9,*(undefined8 *)(lVar11 + 0x180));
      (**(code **)(*plVar7 + 0x318))(plVar7,uVar10,plVar9,*(undefined8 *)(*plVar7 + 800));
    } while( true );
  }
  goto LAB_01fe8f28;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_01fe8d0c:
    if (*(long *)(piVar14 + -2) == lVar11) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto FUN_01fe8d40;
    }
  }
LAB_01fe8d24:
  puVar6 = (undefined8 *)FUN_00d59724(plVar8,lVar11,0);
FUN_01fe8d40:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
LAB_01fe8d4c:
  plVar8 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_01fe8dd0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x24,1);
LAB_01fe8dd0:
    uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    uVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar5);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x24) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01fe8e58;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x24,0);
LAB_01fe8e58:
      (*(code *)*puVar6)(plVar7,uVar10,0,puVar6[1]);
      uVar15 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_017d75a8(uVar15,&stack0x0000000c,0);
      puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      *(undefined8 *)(unaff_x19 + 0x30) = uVar10;
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03780807 == '\0') {
        thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
        DAT_03780807 = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar2;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x20);
      if (cStack000000000000000c != '\0') {
        thunk_FUN_00d56f10(uVar15,0);
      }
      return;
    }
  }
LAB_01fe8f28:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


