/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsliq_n_s32
ENTRY_POINT: 01fe8a70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_possible_biometrics_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01fe8d58) */
/* WARNING: Removing unreachable block (ram,0x01fe8f38) */
/* WARNING: Removing unreachable block (ram,0x01fe8f30) */

void Unity_Burst_Intrinsics_Arm_Neon__vsliq_n_s32(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 uVar16;
  char cStack000000000000000c;
  
  FUN_01743e28();
  puVar3 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = PTR_DAT_033f1220;
  lVar12 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_01fe8b10;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_00d59724(param_1,*(long *)
                                 System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,1)
  ;
LAB_01fe8b10:
  uVar6 = (*(code *)*puVar7)(param_1,puVar7[1]);
  plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (plVar8 != (long *)0x0) {
    FUN_01747cc8(plVar8,uVar6,0);
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01fe8b94;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar2,0);
LAB_01fe8b94:
    puVar5 = StringLiteral_10310;
    plVar9 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar13 = *plVar9;
      lVar12 = *(long *)puVar4;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01fe8c0c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar9,lVar12,0);
LAB_01fe8c0c:
      uVar14 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_00d6225c(plVar9,*(undefined8 *)puVar5);
        if (plVar9 == (long *)0x0) goto LAB_01fe8d4c;
        lVar13 = *plVar9;
        lVar12 = *(long *)puVar5;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 == 0) goto LAB_01fe8d24;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_01fe8d0c;
      }
      lVar13 = *plVar9;
      lVar12 = *(long *)puVar4;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_01fe8c6c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar9,lVar12,1);
LAB_01fe8c6c:
      plVar10 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *plVar10;
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(lVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      uVar11 = (**(code **)(lVar12 + 0x178))(plVar10,*(undefined8 *)(lVar12 + 0x180));
      (**(code **)(*plVar8 + 0x318))(plVar8,uVar11,plVar10,*(undefined8 *)(*plVar8 + 800));
    } while( true );
  }
  goto LAB_01fe8f28;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01fe8d0c:
    if (*(long *)(piVar15 + -2) == lVar12) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_01fe8d40;
    }
  }
LAB_01fe8d24:
  puVar7 = (undefined8 *)FUN_00d59724(plVar9,lVar12,0);
FUN_01fe8d40:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
LAB_01fe8d4c:
  plVar9 = (long *)(**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar3;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01fe8dd0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar9,lVar12,1);
LAB_01fe8dd0:
    uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar11 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar6);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
    if (plVar8 != (long *)0x0) {
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01fe8e58;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar8,lVar12,0);
LAB_01fe8e58:
      (*(code *)*puVar7)(plVar8,uVar11,0,puVar7[1]);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_017d75a8(uVar16,&stack0x0000000c,0);
      puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03780807 == '\0') {
        thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
        DAT_03780807 = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar12 = *(long *)puVar2;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x20);
      if (cStack000000000000000c != '\0') {
        thunk_FUN_00d56f10(uVar16,0);
      }
      return;
    }
  }
LAB_01fe8f28:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


