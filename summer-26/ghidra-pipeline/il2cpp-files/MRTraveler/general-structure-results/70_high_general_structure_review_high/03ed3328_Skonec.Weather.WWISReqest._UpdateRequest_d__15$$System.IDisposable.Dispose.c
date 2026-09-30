/*
FUNCTION_NAME: Skonec.Weather.WWISReqest.<UpdateRequest>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 03ed3328
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Skonec_Weather_WWISReqest_<UpdateRequest>d__15__System_IDisposable_Dispose(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898(PTR_DAT_08e71110);
  FUN_03c8f898(PTR_DAT_08e71118);
  FUN_03c8f898(PTR_DAT_08e71120);
  FUN_03c8f898(PTR_DAT_08e71128);
  FUN_03c8f898(PTR_DAT_08e71130);
  FUN_03c8f898(PTR_DAT_08e71138);
  FUN_03c8f898(PTR_DAT_08e71140);
  FUN_03c8f898(PTR_DAT_08e70d48);
  FUN_03c8f898(PTR_DAT_08e698c0);
  *(undefined1 *)(unaff_x20 + 0x760) = 1;
  plVar6 = (long *)thunk_FUN_03d12a58();
  puVar4 = PTR_DAT_08e70d48;
  puVar3 = PTR_DAT_08e698c0;
  if (plVar6 == (long *)0x0) goto LAB_03ed37d8;
  uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  uVar7 = FUN_06f7465c(*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar4,0);
  uVar7 = FUN_0408833c(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x24),
                       *(undefined4 *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x2c),uVar7,0);
  FUN_03da4894(uVar7,0);
  lVar8 = *(long *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  if (lVar8 == 0) goto LAB_03ed37d8;
  if (*(char *)(lVar8 + 0x26) == '\0') {
    FUN_03ebf360(lVar8,0);
    lVar8 = *(long *)(unaff_x19 + 0x18);
    if ((lVar8 == 0) || (lVar9 = FUN_03eb1bd8(lVar8,0), lVar9 == 0)) goto LAB_03ed37d8;
    lVar8 = FUN_03ea7e7c(lVar8,*(undefined8 *)(lVar9 + 0x10),0);
    if (lVar8 != 0) {
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03ed37d8;
      FUN_03ebf758(*(long *)(unaff_x19 + 0x18),*(undefined4 *)(lVar8 + 0x24),
                   *(undefined1 *)(lVar8 + 0x6d),0);
    }
  }
  lVar8 = *(long *)(unaff_x19 + 0x18);
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6c5a0);
  FUN_04f12584();
  if (lVar8 == 0) goto LAB_03ed37d8;
  *(undefined8 *)(lVar8 + 0x150) = uVar7;
  thunk_FUN_03d233cc(lVar8 + 0x150,uVar7);
  if ((*(long *)(unaff_x19 + 0x18) == 0) || (*(long *)(unaff_x19 + 0x38) == 0)) goto LAB_03ed37d8;
  plVar6 = (long *)FUN_03f0ccfc(*(long *)(unaff_x19 + 0x38),
                                *(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0xb4),0);
  if ((*(long *)(unaff_x19 + 0x18) == 0) ||
     (lVar8 = FUN_03eb1bd8(*(long *)(unaff_x19 + 0x18),0), lVar8 == 0)) goto LAB_03ed37d8;
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar8 = *plVar6;
  bVar1 = *(byte *)(lVar8 + 0x130);
  bVar2 = *(byte *)(*(long *)PTR_DAT_08e710f8 + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08e710f8)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_08e71118 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_08e71118)) {
      lVar8 = FUN_03ed3064();
      if (((*(long *)(unaff_x19 + 0x18) == 0) ||
          (lVar9 = FUN_03eb1bd8(*(long *)(unaff_x19 + 0x18),0), lVar9 == 0)) || (lVar8 == 0))
      goto LAB_03ed37d8;
      uVar5 = FUN_03e530d0(lVar8,*(undefined4 *)(lVar9 + 0x24),0);
      goto LAB_03ed3738;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_08e710e8 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_08e710e8)) {
LAB_03ed3650:
      lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e71138);
      FUN_03eef490(lVar8,0);
      lVar9 = *(long *)(unaff_x19 + 0x18);
      if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_03ed37d8;
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar9 + 0x98);
      uVar10 = *(undefined4 *)(lVar9 + 0xb4);
      goto LAB_03ed3778;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_08e71108 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_08e71108))
    goto LAB_03ed3650;
    bVar2 = *(byte *)(*(long *)PTR_DAT_08e710f0 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08e710f0)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_08e71120 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08e71120)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_08e71100 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08e71100))
        {
          bVar2 = *(byte *)(*(long *)PTR_DAT_08e71110 + 0x130);
          if (bVar1 < bVar2) {
            return;
          }
          if (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08e71110
             ) {
            return;
          }
        }
      }
      lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e71130);
      FUN_03eef4a0(lVar8,0);
      lVar9 = *(long *)(unaff_x19 + 0x18);
      if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_03ed37d8;
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar9 + 0x98);
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar9 + 0xb4);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar9 + 0xb8);
    }
    else {
      lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e71140);
      FUN_03eef498(lVar8,0);
      lVar9 = *(long *)(unaff_x19 + 0x18);
      if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_03ed37d8;
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar9 + 0x98);
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar9 + 0xb4);
      *(undefined4 *)(lVar8 + 0x1c) = *(undefined4 *)(lVar9 + 0xc0);
    }
  }
  else {
    lVar8 = FUN_03ed3064();
    if (((*(long *)(unaff_x19 + 0x18) == 0) ||
        (lVar9 = FUN_03eb1bd8(*(long *)(unaff_x19 + 0x18),0), lVar9 == 0)) || (lVar8 == 0))
    goto LAB_03ed37d8;
    uVar5 = FUN_03e52e14(lVar8,*(undefined4 *)(lVar9 + 0x24),0);
LAB_03ed3738:
    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e71140);
    FUN_03eef498(lVar8,0);
    lVar9 = *(long *)(unaff_x19 + 0x18);
    if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_03ed37d8;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar9 + 0x98);
    uVar10 = *(undefined4 *)(lVar9 + 0xb4);
    *(undefined4 *)(lVar8 + 0x1c) = uVar5;
LAB_03ed3778:
    *(undefined4 *)(lVar8 + 0x18) = uVar10;
  }
  if (*(long *)(lVar9 + 200) != 0) {
    FUN_03ed37dc(*(long *)(lVar9 + 200),lVar8);
    return;
  }
LAB_03ed37d8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


