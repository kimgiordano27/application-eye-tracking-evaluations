/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 09930c20
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray
               (undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000028;
  
  lVar14 = FUN_0433caac(param_2,*param_1);
  if (lVar14 == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(in_stack_00000028 + 0xa8) != 0) {
      lVar7 = *(long *)(*(long *)(in_stack_00000028 + 0xa8) + 0x10);
      lVar14 = thunk_FUN_049ae08c(PTR_DAT_0ac0b718);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar8 = FUN_08cf5044(0);
      if (lVar7 != 0) {
        uVar8 = FUN_08bd908c(lVar7,uVar8,0);
        thunk_FUN_049ae08c(PTR_DAT_0acb2f08);
        uVar9 = thunk_FUN_04983f60();
        uVar16 = thunk_FUN_049ae08c(PTR_DAT_0acb3a38);
        FUN_09971338(uVar9,uVar16,uVar8,in_stack_00000028,0);
        uVar8 = thunk_FUN_049ae08c(PTR_DAT_0acb3a20);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar9,uVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(char *)(lVar14 + 0x30) != '\0') goto LAB_09930bbc;
  FUN_099304ec();
  if (*(long *)(lVar14 + 0xe0) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0aca96e8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar8 = FUN_09942ac0(0);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(in_stack_00000028 + 200) = uVar8;
    thunk_FUN_049ee3d8((undefined8 *)(in_stack_00000028 + 200));
    lVar14 = FUN_09942ac0(0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar14 = FUN_0997d024(lVar14,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar14 = FUN_09943410(lVar14,0);
  }
  else {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(in_stack_00000028 + 200) = *(undefined8 *)(lVar14 + 200);
    thunk_FUN_049ee3d8((undefined8 *)(in_stack_00000028 + 200));
    if (*(long *)(lVar14 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar14 = FUN_09943410(*(long *)(lVar14 + 0xe0),0);
  }
  if (lVar14 == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar15 = *(long **)(in_stack_00000028 + 200);
    lVar14 = 0;
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      bVar4 = *(byte *)(*(long *)PTR_DAT_0aca96e8 + 0x130);
      if ((*(byte *)(lVar14 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_0aca96e8))
      {
        bVar4 = *(byte *)(*(long *)PTR_DAT_0acab4f0 + 0x130);
        if ((bVar4 <= *(byte *)(lVar14 + 0x130)) &&
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar4 * 8 + -8) == *(long *)PTR_DAT_0acab4f0)
           ) {
          lVar14 = FUN_0433caac(plVar15);
          FUN_0992fbe8();
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar7 = FUN_0997d024(lVar14,0);
          if (lVar7 != 0) {
            lVar14 = FUN_0997d024(lVar14,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            lVar14 = FUN_09943410(lVar14,0);
            goto LAB_09930868;
          }
        }
      }
      else {
        FUN_0992ef50();
        lVar14 = FUN_0997d024(plVar15,0);
        if (lVar14 != 0) {
          lVar14 = FUN_0997d024(plVar15,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar14 = FUN_09943410(lVar14,0);
          goto LAB_09930868;
        }
      }
      lVar14 = 0;
    }
  }
LAB_09930868:
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(in_stack_00000028 + 0xc0);
  thunk_FUN_049ee3d8();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  cVar2 = *(char *)(in_stack_00000028 + 0x74);
  plVar15 = *(long **)(in_stack_00000028 + 200);
  *(char *)(lVar14 + 0x72) = cVar2;
  if (plVar15 != (long *)0x0) {
    bVar4 = *(byte *)(*(long *)PTR_DAT_0aca96e8 + 0x130);
    if ((bVar4 <= *(byte *)(*plVar15 + 0x130)) &&
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar4 * 8 + -8) == *(long *)PTR_DAT_0aca96e8))
    {
      bVar4 = FUN_0996e920(plVar15,0);
      *(byte *)(lVar14 + 0x72) = cVar2 != '\0' | bVar4 & 1;
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
  }
  uVar1 = *(uint *)(in_stack_00000028 + 0xd0);
  *(undefined1 *)(lVar14 + 0x73) = *(undefined1 *)(in_stack_00000028 + 0x76);
  *(uint *)(lVar14 + 0x90) = uVar1 | *(uint *)(lVar14 + 0x90);
  plVar15 = *(long **)(lVar14 + 0x30);
  if (plVar15 != (long *)0x0) {
    if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(*plVar15 + 0x298))
              (plVar15,*(undefined8 *)(*(long *)(unaff_x19 + 0x58) + 0xa8),in_stack_00000028,
               *(undefined8 *)(*plVar15 + 0x2a0));
  }
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *(long *)(in_stack_00000028 + 0x88);
  if (((lVar7 != 0) || (*(long *)(in_stack_00000028 + 0x90) != 0)) &&
     (plVar15 = *(long **)(lVar14 + 0x80), plVar15 != (long *)0x0)) {
    if ((int)plVar15[2] == 3) {
      uVar10 = (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
      if ((uVar10 & 1) == 0) goto LAB_09930990;
    }
    else {
      if ((int)plVar15[2] != 0) {
LAB_09930990:
        thunk_FUN_049ae08c(PTR_DAT_0acb2f08);
        uVar8 = thunk_FUN_04983f60();
        uVar9 = thunk_FUN_049ae08c(PTR_DAT_0acb3a18);
        FUN_099712fc(uVar8,uVar9,in_stack_00000028,0);
        uVar9 = thunk_FUN_049ae08c(PTR_DAT_0acb3a20);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar8,uVar9);
      }
      if (lVar7 == 0) {
        *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(in_stack_00000028 + 0x90);
        *(undefined4 *)(lVar14 + 0x24) = 3;
        thunk_FUN_049ee3d8();
      }
      else {
        *(long *)(lVar14 + 0x38) = lVar7;
        *(undefined4 *)(lVar14 + 0x24) = 0;
        thunk_FUN_049ee3d8();
      }
      plVar15 = *(long **)(lVar14 + 0x30);
      if (plVar15 != (long *)0x0) {
        uVar8 = FUN_09942e2c(lVar14,0);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
        uVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acb3170);
        FUN_0994a334(uVar9,in_stack_00000028,0);
        uVar8 = (**(code **)(*plVar15 + 0x228))
                          (plVar15,uVar8,uVar16,uVar9,1,*(undefined8 *)(*plVar15 + 0x230));
        *(undefined8 *)(lVar14 + 0x40) = uVar8;
        thunk_FUN_049ee3d8();
      }
    }
  }
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar10 = FUN_09970978(in_stack_00000028,0);
  if ((uVar10 & 1) != 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar15 = (long *)FUN_099708c8(in_stack_00000028,0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = FUN_08d00f4c(plVar15,0);
    plVar11 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0acb3a08,uVar5);
    puVar3 = PTR_DAT_0acab8d8;
    lVar7 = 0x20;
    for (uVar10 = 0; iVar6 = FUN_08d00f4c(plVar15,0), (int)uVar10 < iVar6; uVar10 = uVar10 + 1) {
      plVar12 = (long *)(**(code **)(*plVar15 + 0x308))
                                  (plVar15,uVar10 & 0xffffffff,*(undefined8 *)(*plVar15 + 0x310));
      if (plVar12 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar12);
        }
      }
      FUN_09931e84();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = plVar12[0xe];
      if ((lVar17 != 0) &&
         (lVar13 = thunk_FUN_04983e64(lVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
        uVar8 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar8,0);
      }
      if (*(uint *)(plVar11 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar11[uVar10 + 4] = lVar17;
      thunk_FUN_049ee3d8((long)plVar11 + lVar7,lVar17);
      lVar7 = lVar7 + 8;
    }
    *(long *)(lVar14 + 0x98) = (long)plVar11;
    thunk_FUN_049ee3d8((long *)(lVar14 + 0x98),plVar11);
  }
  *(long *)(lVar14 + 0xa0) = in_stack_00000028;
  thunk_FUN_049ee3d8();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(long *)(in_stack_00000028 + 0xe0) = lVar14;
  thunk_FUN_049ee3d8((long *)(in_stack_00000028 + 0xe0),lVar14);
LAB_09930bbc:
  if (*in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined1 *)(*in_stack_00000010 + 0x30) = 0;
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  return;
}


