/*
FUNCTION_NAME: NewFolder.VR.DrawerPhysics$$CheckIfClosed
ENTRY_POINT: 01cead58
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void NewFolder_VR_DrawerPhysics__CheckIfClosed(void)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  void *unaff_x19;
  long unaff_x20;
  size_t sVar8;
  long *plVar9;
  long unaff_x23;
  void *unaff_x24;
  long *unaff_x27;
  long unaff_x29;
  
  if (*(uint *)(unaff_x20 + -0x58) < 0xc) goto LAB_01ceba70;
  *(undefined8 *)(unaff_x23 + 0x78) = *(undefined8 *)PTR_DAT_027b5af0;
  thunk_FUN_01286abc();
  sVar8 = *(size_t *)(unaff_x29 + -0x88);
  memset(unaff_x19,0,sVar8);
  memcpy(unaff_x24,unaff_x19,sVar8);
  lVar1 = *unaff_x27;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0122e748();
  }
  uVar2 = FUN_01230c60(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x40));
  if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
    FUN_0122e748(*unaff_x27);
  }
  pvVar3 = (void *)thunk_FUN_01220c34();
  if ((uVar2 & 1) == 0) {
    sVar8 = *(size_t *)(unaff_x29 + -0x88);
    memcpy(unaff_x24,pvVar3,sVar8);
    memcpy(unaff_x19,unaff_x24,sVar8);
    pvVar3 = *(void **)(unaff_x29 + -0x108);
    memcpy(pvVar3,unaff_x19,sVar8);
    lVar1 = *unaff_x27;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0122e748();
    }
    uVar2 = FUN_01230c60(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x40),pvVar3);
    pvVar3 = unaff_x19;
    if ((uVar2 & 1) != 0) goto LAB_01ceae60;
    plVar9 = *(long **)(unaff_x29 + -0x70);
    uVar6 = 0;
  }
  else {
LAB_01ceae60:
    lVar1 = *unaff_x27;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0122e748();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x40);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0122e748(lVar1);
    }
    lVar4 = *unaff_x27;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0122e748();
    }
    plVar9 = *(long **)(unaff_x29 + -0x70);
    FUN_012314a4(lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2d0),
                 *(undefined8 *)(unaff_x29 + -0x140),pvVar3,0,unaff_x29 + -0x18);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x18);
  }
  if (0xc < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x80) = uVar6;
    thunk_FUN_01286abc((undefined8 *)(unaff_x23 + 0x80));
    if (0xd < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x88) = *(undefined8 *)PTR_DAT_027b5af0;
      thunk_FUN_01286abc();
      lVar1 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_027b5eb0) {
            puVar5 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_01ceaf6c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b5eb0,1);
LAB_01ceaf6c:
      uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (0xe < *(uint *)(unaff_x23 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x90) = uVar6;
        thunk_FUN_01286abc();
        FUN_01e68d7c();
        if (*(long *)(*(long *)(unaff_x29 + -0xf8) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
LAB_01ceba70:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


