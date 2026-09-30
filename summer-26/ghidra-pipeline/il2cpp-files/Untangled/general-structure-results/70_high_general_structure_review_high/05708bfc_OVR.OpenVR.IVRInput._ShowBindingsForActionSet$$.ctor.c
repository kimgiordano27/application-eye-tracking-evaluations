/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._ShowBindingsForActionSet$$.ctor
ENTRY_POINT: 05708bfc
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


undefined8 OVR_OpenVR_IVRInput__ShowBindingsForActionSet___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x26;
  
  plVar4 = (long *)FUN_057308dc();
  if (plVar4 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    if ((iVar3 != 8) &&
       (iVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230)), iVar3 != 10
       )) {
      FUN_02a551a0(plVar4);
      uVar7 = FUN_0573b6d8(plVar4,0);
      thunk_FUN_02f239f0(PTR_DAT_06d06338);
      FUN_02a55ad4();
      uVar8 = FUN_055b5920(0);
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d57c28);
      uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d57b40);
      uVar8 = FUN_056f1630(uVar9,uVar8,uVar10);
LAB_057091ac:
      uVar7 = FUN_0569a7dc(plVar4,uVar7,uVar8,0,0);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d57c30);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar7,uVar8);
    }
    if (*(int *)(*(long *)PTR_DAT_06d37b78 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar5 = FUN_0574006c(param_1,0);
    if (lVar5 == 0) {
      lVar5 = FUN_057349b4();
      if (lVar5 != 0) {
        if (*(int *)(*(long *)PTR_DAT_06d37b78 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_0574006c(lVar5,0);
        lVar5 = FUN_05742884(lVar5,0);
        if (lVar5 == 0) goto LAB_057090c8;
        FUN_05698e6c(lVar5,0);
        FUN_0570ab34();
        puVar2 = PTR_DAT_06d55378;
        lVar5 = FUN_057349b4();
        puVar1 = PTR_DAT_06d02350;
        if (lVar5 != 0) {
          do {
            FUN_05698e6c();
            iVar3 = (**(code **)(*unaff_x19 + 0x238))();
            if (iVar3 == 4) {
              plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
              if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440();
              }
              uVar12 = thunk_FUN_05464b70(plVar4,*(undefined8 *)puVar2,0);
              if ((uVar12 & 1) != 0) {
                return 0;
              }
            }
            FUN_05698e6c();
            FUN_05698a14();
          } while( true );
        }
      }
      lVar5 = FUN_057349b4();
      if (lVar5 != 0) {
        if (*(int *)(*(long *)PTR_DAT_06d37b78 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_0574006c(lVar5,0);
        *unaff_x26 = uVar7;
        thunk_FUN_02f411dc();
      }
      lVar5 = FUN_057349b4();
      if (lVar5 == 0) {
        FUN_05698e6c();
        return 0;
      }
      lVar5 = FUN_05742884(lVar5,0);
      if (lVar5 != 0) {
        FUN_05698e6c(lVar5,0);
        lVar5 = FUN_05707c78();
        *unaff_x20 = lVar5;
        thunk_FUN_02f411dc();
        goto LAB_05709098;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x20);
      if ((plVar4 != (long *)0x0) || (plVar4 = *(long **)(param_1 + 0x18), plVar4 != (long *)0x0)) {
        FUN_02a551a0(plVar4);
        uVar7 = FUN_0573b6d8(plVar4,0);
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar8 = FUN_055b5920(0);
        uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d57c20);
        uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d57b40);
        uVar8 = FUN_056f1630(uVar9,uVar8,uVar10);
        goto LAB_057091ac;
      }
      if ((*(long *)(unaff_x21 + 0x20) != 0) &&
         (plVar4 = (long *)FUN_0569ab44(*(long *)(unaff_x21 + 0x20),0), plVar4 != (long *)0x0)) {
        lVar11 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06d57c08) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05708ee8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d57c08,0);
LAB_05708ee8:
        lVar11 = (*(code *)*puVar6)(plVar4);
        *unaff_x20 = lVar11;
        thunk_FUN_02f411dc();
        puVar1 = PTR_DAT_06d55760;
        plVar4 = *(long **)(unaff_x21 + 0x28);
        if (plVar4 != (long *)0x0) {
          lVar11 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06d55760) {
                puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_05708f68;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d55760,0);
LAB_05708f68:
          iVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if (2 < iVar3) {
            plVar4 = *(long **)(unaff_x21 + 0x28);
            (**(code **)(*unaff_x19 + 0x278))();
            if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)PTR_DAT_06d06338);
            }
            uVar7 = FUN_055b5920(0);
            if (*unaff_x20 != 0) {
              uVar8 = thunk_FUN_02ebbee0(*unaff_x20,0);
              FUN_056f1750(*(undefined8 *)PTR_DAT_06d57c18,uVar7,lVar5,uVar8);
              if (*(int *)(*(long *)PTR_DAT_06d55140 + 0xe0) == 0) {
                thunk_FUN_02f12b58(*(long *)PTR_DAT_06d55140);
              }
              uVar7 = FUN_0569330c();
              if (plVar4 != (long *)0x0) {
                lVar5 = *plVar4;
                uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto OVR_OpenVR_IVRIOBuffer__Close__BeginInvoke;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar6 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar1,1);
OVR_OpenVR_IVRIOBuffer__Close__BeginInvoke:
                (*(code *)*puVar6)(plVar4,3,uVar7,0,puVar6[1]);
                goto LAB_05709098;
              }
            }
            goto LAB_057090c8;
          }
        }
LAB_05709098:
        FUN_05698a14();
        return 1;
      }
    }
  }
LAB_057090c8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


