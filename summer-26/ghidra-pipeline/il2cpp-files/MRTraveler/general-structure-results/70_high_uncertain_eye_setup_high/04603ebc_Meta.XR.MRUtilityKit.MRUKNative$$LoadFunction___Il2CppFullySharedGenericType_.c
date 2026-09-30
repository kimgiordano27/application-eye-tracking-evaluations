/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$LoadFunction<__Il2CppFullySharedGenericType>
ENTRY_POINT: 04603ebc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_MRUKNative__LoadFunction<__Il2CppFullySharedGenericType>(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar18;
  ulong uVar19;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e695f0);
  FUN_03c8f898(PTR_DAT_08e69c10);
  puVar13 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_03cf12a0();
    puVar13 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  uVar18 = *puVar13;
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  plVar6 = (long *)FUN_0710fcf0(uVar18,0);
  uVar18 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80ca8,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,uVar18,0,*(undefined8 *)(*plVar6 + 0x200));
    if ((uVar7 & 1) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e693f0);
      FUN_036f8b20();
      uVar18 = FUN_070c20bc(0);
      uVar8 = thunk_FUN_03ce5214(PTR_DAT_08e80cb0);
      uVar18 = FUN_071ed088(uVar8,uVar18,plVar6,0);
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar8 = thunk_FUN_03cf5234();
      FUN_07064ba8(uVar8,uVar18,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8);
    }
    uVar7 = *(ulong *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(uVar7 + 0x135) & 1) == 0) {
      uVar7 = FUN_03cf1244();
    }
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = uVar7;
    in_stack_00000018 = unaff_w20;
    uVar18 = thunk_FUN_03d12a58(&stack0x00000008,0);
    if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b480);
    }
    uVar18 = FUN_07135f70(uVar18,0);
    uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000004);
    if (*(int *)(*(long *)PTR_DAT_08e80c98 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e80c98);
    }
    uVar7 = FUN_071df358(uVar8,0);
    lVar9 = FUN_071dfa5c(plVar6,0);
    lVar14 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03cf1244(lVar14);
    }
    plVar6 = (long *)thunk_FUN_03cf5234(lVar14);
    FUN_051c29a0(plVar6,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
    puVar4 = PTR_DAT_08e78740;
    puVar3 = PTR_DAT_08e69c10;
    puVar2 = PTR_DAT_08e693f0;
    if ((lVar9 != 0) && (lVar14 = *(long *)(lVar9 + 0x18), lVar14 != 0)) {
      uVar19 = 0;
      do {
        if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar19) {
          if (plVar6 != (long *)0x0) {
            lVar14 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_03cf1244(lVar14);
            }
            lVar16 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar7 == 0) goto LAB_04604208;
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_046041f0;
          }
          break;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar15 = *(ulong *)(lVar14 + uVar19 * 8 + 0x20);
        if ((uVar15 != 0) && ((uVar15 & uVar7) == uVar15)) {
          in_stack_00000008 = uVar15;
          uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)puVar3,&stack0x00000008);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)puVar2);
          }
          uVar10 = FUN_070c211c(0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)puVar4);
          }
          plVar11 = (long *)FUN_0706dbbc(uVar8,uVar18,uVar10,0);
          if (plVar6 == (long *)0x0) break;
          lVar16 = *(long *)(unaff_x19 + 0x38);
          lVar14 = *(long *)(lVar16 + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_03cf1244(lVar14);
            lVar16 = *(long *)(unaff_x19 + 0x38);
          }
          lVar16 = *(long *)(lVar16 + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_03cf1244(lVar16);
          }
          if (plVar11 == (long *)0x0) break;
          if (*(long *)(*plVar11 + 0x40) != *(long *)(lVar16 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fecc(plVar11);
          }
          puVar12 = (undefined4 *)thunk_FUN_03cf5388();
          lVar16 = *plVar6;
          uVar1 = *puVar12;
          uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                goto LAB_0460419c;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar6,lVar14,2);
LAB_0460419c:
          (*(code *)*puVar13)(plVar6,uVar1,puVar13[1]);
        }
        lVar14 = *(long *)(lVar9 + 0x18);
        uVar19 = uVar19 + 1;
      } while (lVar14 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar17 = piVar17 + 4;
    if (uVar7 == 0) break;
LAB_046041f0:
    if (*(long *)(piVar17 + -2) == lVar14) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_04604224;
    }
  }
LAB_04604208:
  puVar13 = (undefined8 *)FUN_03cf1348(plVar6,lVar14,0);
LAB_04604224:
  iVar5 = (*(code *)*puVar13)(plVar6,puVar13[1]);
  if (iVar5 == 0) {
    uVar18 = *(undefined8 *)(lVar9 + 0x18);
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 == 0) {
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244();
      }
      uVar8 = **(undefined8 **)(lVar9 + 0xb8);
      lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a248);
      FUN_04d64950(lVar9,uVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50),0);
      lVar14 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_03cf1244();
      }
      *(long *)(*(long *)(lVar14 + 0xb8) + 8) = lVar9;
      lVar14 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_03cf1244();
      }
      thunk_FUN_03d233cc(*(long *)(lVar14 + 0xb8) + 8,lVar9);
    }
    uVar7 = FUN_04608154(uVar18,lVar9,*(undefined8 *)PTR_DAT_08e80ca0);
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244(lVar9);
      }
      lVar14 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_046043a0;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar6,lVar9,2);
LAB_046043a0:
      (*(code *)*puVar13)(plVar6,0,puVar13[1]);
    }
  }
  return plVar6;
}


