/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 054a8148
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long lVar7;
  undefined8 uVar8;
  uint unaff_w21;
  long *unaff_x22;
  long lVar9;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined1 auVar10 [16];
  
  do {
    FUN_05508bc8(0);
    uVar2 = unaff_w28;
    do {
      if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      if (unaff_x19 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
LAB_054a8304:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      iVar3 = (**(code **)(*unaff_x19 + 0x368))();
      unaff_w28 = iVar3 + uVar2;
      if (iVar3 == 0) {
        lVar7 = *(long *)PTR_DAT_06a194a8;
        if (*(uint *)(unaff_x29 + -0x18) < uVar2) {
          FUN_05508bc8(0);
        }
        uVar8 = *(undefined8 *)(unaff_x29 + -0x20);
        if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        puVar1 = PTR_DAT_06a21338;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar8;
        *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar2;
        uVar8 = FUN_03597114(unaff_x29 + -0x30,*(undefined8 *)puVar1);
        FUN_02cf2aa0(unaff_x29 + -0x40);
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return uVar8;
        }
        goto LAB_054a8304;
      }
      uVar5 = *(uint *)(unaff_x29 + -0x18);
      if (unaff_w28 == uVar5) {
        uVar2 = unaff_w28 * 2;
        if (unaff_w21 <= uVar2) {
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar2 = FUN_054e9108(0x7fffffc7,unaff_w28 + 1,0);
        }
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar9 = *unaff_x25;
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02dcfd18();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02dcfd18();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02dcfd18();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02dcfd18();
        }
        plVar4 = (long *)**(long **)(lVar7 + 0xb8);
        if (plVar4 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_054a8304;
        }
        uVar8 = (**(code **)(*plVar4 + 0x178))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x180));
        auVar10 = FUN_0474d278(uVar8,*unaff_x26);
        FUN_0474cd60(unaff_x29 + -0x20,auVar10._0_8_,auVar10._8_8_,*unaff_x27);
        if (*(long *)(unaff_x29 + -0x10) != 0) {
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar9 = *unaff_x25;
          lVar7 = *(long *)(lVar9 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02dcfd18();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02dcfd18();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar7 = *(long *)(lVar9 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02dcfd18();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02dcfd18();
          }
          plVar4 = (long *)**(long **)(lVar7 + 0xb8);
          if (plVar4 == (long *)0x0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            goto LAB_054a8304;
          }
          (**(code **)(*plVar4 + 0x188))
                    (plVar4,*(undefined8 *)(unaff_x29 + -0x10),0,*(undefined8 *)(*plVar4 + 400));
        }
        uVar6 = *unaff_x26;
        *(undefined8 *)(unaff_x29 + -0x10) = uVar8;
        auVar10 = FUN_0474d278(uVar8,uVar6);
        uVar5 = auVar10._8_4_;
        *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar10;
      }
      unaff_x23 = *unaff_x22;
      uVar2 = unaff_w28;
    } while (unaff_w28 <= uVar5);
  } while( true );
}


