/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsli_n_s32
ENTRY_POINT: 01fe8a30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_possible_biometrics_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01fe8d58) */
/* WARNING: Removing unreachable block (ram,0x01fe8f38) */
/* WARNING: Removing unreachable block (ram,0x01fe8f30) */

void Unity_Burst_Intrinsics_Arm_Neon__vsli_n_s32(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  long lVar16;
  char cStack000000000000000c;
  
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  *(undefined1 *)(unaff_x20 + 0x7ed) = 1;
  cStack000000000000000c = 0;
  if ((char)unaff_x19[8] != '\0') {
    return;
  }
  if (*(char *)((long)unaff_x19 + 0x41) == '\0') {
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
    if (plVar7 == (long *)0x0) goto LAB_01fe8f28;
    FUN_01743c34(plVar7,0);
    (**(code **)(*unaff_x19 + 0x1e8))();
  }
  else {
    lVar16 = unaff_x19[6];
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
    if (plVar7 == (long *)0x0) goto LAB_01fe8f28;
    FUN_01743e28(plVar7,lVar16,0);
  }
  puVar3 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = PTR_DAT_033f1220;
  lVar16 = *plVar7;
  uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
        puVar8 = (undefined8 *)(lVar16 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_01fe8b10;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_00d59724(plVar7,*(long *)
                                System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,1);
LAB_01fe8b10:
  uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  plVar9 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (plVar9 != (long *)0x0) {
    FUN_01747cc8(plVar9,uVar6,0);
    lVar16 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01fe8b94;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_01fe8b94:
    puVar5 = StringLiteral_10310;
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar12 = *plVar7;
      lVar16 = *(long *)puVar4;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar16) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01fe8c0c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar16,0);
LAB_01fe8c0c:
      uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar14 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)puVar5);
        if (plVar7 == (long *)0x0) goto LAB_01fe8d4c;
        lVar12 = *plVar7;
        lVar16 = *(long *)puVar5;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar14 == 0) goto LAB_01fe8d24;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_01fe8d0c;
      }
      lVar12 = *plVar7;
      lVar16 = *(long *)puVar4;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar16) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_01fe8c6c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar16,1);
LAB_01fe8c6c:
      plVar10 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *plVar10;
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(lVar16 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      uVar11 = (**(code **)(lVar16 + 0x178))(plVar10,*(undefined8 *)(lVar16 + 0x180));
      (**(code **)(*plVar9 + 0x318))(plVar9,uVar11,plVar10,*(undefined8 *)(*plVar9 + 800));
    } while( true );
  }
  goto LAB_01fe8f28;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01fe8d0c:
    if (*(long *)(piVar15 + -2) == lVar16) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_01fe8d40;
    }
  }
LAB_01fe8d24:
  puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar16,0);
FUN_01fe8d40:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_01fe8d4c:
  plVar7 = (long *)(**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    lVar16 = *(long *)puVar3;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar16) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01fe8dd0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar16,1);
LAB_01fe8dd0:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar16 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar6);
    plVar7 = (long *)(**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
    if (plVar7 != (long *)0x0) {
      lVar13 = *plVar7;
      lVar12 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01fe8e58;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar12,0);
LAB_01fe8e58:
      (*(code *)*puVar8)(plVar7,lVar16,0,puVar8[1]);
      lVar12 = unaff_x19[0xb];
      cStack000000000000000c = '\0';
      FUN_017d75a8(lVar12,&stack0x0000000c,0);
      puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      unaff_x19[6] = lVar16;
      *(undefined2 *)(unaff_x19 + 8) = 0x101;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03780807 == '\0') {
        thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
        DAT_03780807 = '\x01';
      }
      lVar16 = *(long *)puVar2;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar16 = *(long *)puVar2;
      }
      *(undefined4 *)((long)unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x20);
      if (cStack000000000000000c == '\0') {
        return;
      }
      thunk_FUN_00d56f10(lVar12,0);
      return;
    }
  }
LAB_01fe8f28:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


