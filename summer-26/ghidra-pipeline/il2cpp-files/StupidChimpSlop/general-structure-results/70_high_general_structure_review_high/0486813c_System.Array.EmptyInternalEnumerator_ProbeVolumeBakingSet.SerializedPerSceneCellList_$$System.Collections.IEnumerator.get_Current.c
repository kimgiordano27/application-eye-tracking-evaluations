/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0486813c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 *unaff_x19;
  long unaff_x20;
  code *pcVar15;
  undefined8 *unaff_x21;
  long *plVar16;
  long *plVar17;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  
  auVar21._8_8_ = param_3;
  auVar21._0_8_ = param_2;
  do {
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x38) = 0;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    *(undefined1 (*) [16])(unaff_x29 + -0x40) = auVar21;
    thunk_FUN_02dc1ef0(unaff_x29 + -0x40,0);
    uVar10 = *unaff_x26;
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x40);
    uVar7 = FUN_02ee4294(unaff_x29 + -0x70,uVar10);
    if ((uVar7 & 1) == 0) {
      uVar19 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x70);
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0x1c) = uVar19;
      *(undefined8 *)(unaff_x19 + 0x1a) = uVar10;
      thunk_FUN_02dc1ef0(unaff_x19 + 0x1a,0);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      lVar11 = *(long *)(unaff_x29 + -0xb8);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02d8720c();
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        FUN_02d8720c();
      }
      (*pcVar15)(unaff_x19 + 2,unaff_x29 + -0x70);
      goto FUN_048684ac;
    }
    plVar17 = *(long **)(unaff_x29 + -0x70);
    if (plVar17 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x68) == '\0')
      goto 
      System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__Dispose
      ;
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x29 + -0x66);
      lVar8 = *(long *)(*(long *)PTR_DAT_066488c0 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
      }
      lVar11 = *plVar17;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04868220;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540(plVar17,lVar8,0);
LAB_04868220:
      uVar7 = (*(code *)*puVar9)(plVar17,uVar3,puVar9[1]);
      if ((uVar7 & 1) == 0) {

        System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__Dispose
        :
        plVar17 = *(long **)(unaff_x19 + 0x10);
        lVar11 = *(long *)(unaff_x29 + -0xb8);
        if (plVar17 == (long *)0x0)
        goto 
        System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__System_Collections_IEnumerator_get_Current
        ;
        lVar8 = *plVar17;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 == 0) goto LAB_04868278;
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_04868260;
      }
    }
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 == (long *)0x0) {
LAB_04868664:
      if (*(long *)(*(long *)(unaff_x29 + -0xb8) + 0x28) == *(long *)(unaff_x29 + -0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048688c4;
    }
    lVar8 = *(long *)(unaff_x20 + 0x20);
    lVar11 = *(long *)(unaff_x19 + 0xc);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c(lVar8);
    }
    lVar12 = *plVar17;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          lVar8 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
          goto LAB_04867edc;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    lVar8 = FUN_02d87540(plVar17,lVar8,0);
LAB_04867edc:
    lVar8 = *(long *)(lVar8 + 8);
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar17,unaff_x29 + -0x40);
    if (lVar11 == 0) goto LAB_04868664;
    lVar12 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar8 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02d8720c();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02d8720c();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    puVar9 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x21;
    }
    pcVar15 = *(code **)(lVar8 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x48) = puVar9;
    (*pcVar15)(uVar10,lVar8,lVar11,unaff_x29 + -0x48,unaff_x29 + -0x40);
    lVar8 = *unaff_x28;
    uVar19 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x38) = 0;
    lVar8 = *(long *)(lVar8 + 0x20);
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar19;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0xb0);
    thunk_FUN_02dc1ef0(unaff_x29 + -0x40,0);
    uVar10 = *unaff_x25;
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
    uVar7 = FUN_0419c910(unaff_x29 + -0x60,uVar10);
    if ((uVar7 & 1) == 0) {
      uVar19 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x60);
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar19;
      *(undefined8 *)(unaff_x19 + 0x16) = uVar10;
      thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      lVar11 = *(long *)(unaff_x29 + -0xb8);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02d8720c();
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar2 & 1) == 0) {
        FUN_02d8720c();
      }
      (*pcVar15)(unaff_x19 + 2,unaff_x29 + -0x60);
      goto FUN_048684ac;
    }
    plVar17 = *(long **)(unaff_x29 + -0x60);
    if (plVar17 == (long *)0x0) {
      fVar18 = *(float *)(unaff_x29 + -0x58);
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x29 + -0x54);
      lVar8 = *(long *)(*(long *)PTR_DAT_0664d488 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
      }
      lVar11 = *plVar17;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04868084;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540(plVar17,lVar8,0);
LAB_04868084:
      fVar18 = (float)(*(code *)*puVar9)(plVar17,uVar3,puVar9[1]);
    }
    if ((float)unaff_x19[0xe] < fVar18) {
      unaff_x19[0xe] = fVar18;
    }
    plVar17 = *(long **)(unaff_x19 + 0x10);
    if (plVar17 == (long *)0x0) break;
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c(lVar8);
    }
    lVar11 = *plVar17;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0486812c;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar17,lVar8,1);
LAB_0486812c:
    auVar21 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    param_1 = *unaff_x27;
  } while( true );
  if (*(long *)(*(long *)(unaff_x29 + -0xb8) + 0x28) == *(long *)(unaff_x29 + -0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  goto LAB_048688c4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_04868260:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664c6b0) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_048684ec;
    }
  }
LAB_04868278:
  puVar9 = (undefined8 *)FUN_02d87540(plVar17,*(long *)PTR_DAT_0664c6b0,0);
LAB_048684ec:
  auVar21 = (*(code *)*puVar9)(plVar17,puVar9[1]);
  puVar4 = PTR_DAT_06648868;
  if (*(int *)(*(long *)PTR_DAT_06648868 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar21;
  thunk_FUN_02dc1ef0(unaff_x29 + -0x30,0);
  cVar5 = DAT_06a4963a;
  plVar17 = *(long **)(unaff_x29 + -0x30);
  uVar7 = *(ulong *)(unaff_x29 + -0x28);
  *(long **)(unaff_x29 + -0x80) = plVar17;
  *(ulong *)(unaff_x29 + -0x78) = uVar7;
  if (cVar5 == '\0') {
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4963a = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a4963b == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963b = '\x01';
  }
  if (plVar17 == (long *)0x0) {
LAB_048676e0:
    if (DAT_06a4963c == '\0') {
      FUN_02d4dc40(PTR_DAT_06648890);
      DAT_06a4963c = '\x01';
    }
    plVar17 = *(long **)(unaff_x29 + -0x80);
    if (plVar17 != (long *)0x0) {
      lVar8 = *plVar17;
      uVar3 = *(undefined2 *)(unaff_x29 + -0x78);
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_04867944;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540(plVar17,*(long *)PTR_DAT_06648890,2);
LAB_04867944:
      (*(code *)*puVar9)(plVar17,uVar3,puVar9[1]);
    }

    System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__System_Collections_IEnumerator_get_Current
    :
    plVar16 = (long *)(unaff_x19 + 0x12);
    plVar17 = (long *)*plVar16;
    if (plVar17 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06647b18)
         ) {
        *(long *)(unaff_x29 + -0xb8) = lVar11;
        if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac();
        }
        goto LAB_048688c4;
      }
      lVar8 = FUN_04f2e80c(plVar17,0);
      if (lVar8 == 0) {
        if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_048688c4;
      }
      FUN_04f2e8cc(lVar8,0);
    }
    *plVar16 = 0;
    thunk_FUN_02dc1ef0(plVar16,0);
    uVar20 = unaff_x19[0xe];
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x10,0);
    plVar17 = *(long **)(unaff_x19 + 2);
    if (plVar17 == (long *)0x0) {
      unaff_x19[6] = uVar20;
    }
    else {
      lVar8 = *(long *)(*(long *)PTR_DAT_0664d470 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
      }
      lVar12 = *plVar17;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_0486849c;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540(plVar17,lVar8,2);
LAB_0486849c:
      (*(code *)*puVar9)(uVar20,plVar17,puVar9[1]);
    }
  }
  else {
    lVar8 = *plVar17;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_048685d8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar17,*(long *)PTR_DAT_06648890,0);
LAB_048685d8:
    iVar6 = (*(code *)*puVar9)(plVar17,uVar7 & 0xffffffff,puVar9[1]);
    if (iVar6 != 0) goto LAB_048676e0;
    uVar19 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x80);
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar19;
    *(undefined8 *)(unaff_x19 + 0x1e) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x1e,0);
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02d8720c();
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_02d8720c();
    }
    (*pcVar15)(unaff_x19 + 2,unaff_x29 + -0x80);
  }
FUN_048684ac:
  if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
    return;
  }
LAB_048688c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


