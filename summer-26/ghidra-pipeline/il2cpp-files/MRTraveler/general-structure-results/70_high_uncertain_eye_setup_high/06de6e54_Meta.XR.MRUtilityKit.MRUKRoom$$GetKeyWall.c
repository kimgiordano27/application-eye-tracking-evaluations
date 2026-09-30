/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetKeyWall
ENTRY_POINT: 06de6e54
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetKeyWall(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  do {
    lVar8 = *unaff_x26;
    do {
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) {
LAB_06de6e88:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05a52ed8(lVar8,unaff_x22,*unaff_x27);
      FUN_051ddf0c();
      if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06de6e88;
      uVar2 = FUN_05a527b0(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x25);
      if ((uVar2 & 1) == 0) {
        FUN_06de6ed0();
        return;
      }
      if ((*(long *)(unaff_x20 + 0x28) == 0) ||
         (plVar3 = (long *)FUN_05a524d0(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x29),
         plVar3 == (long *)0x0)) goto LAB_06de6e88;
      lVar8 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e91ad0) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06de6c10;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e91ad0,0);
LAB_06de6c10:
      iVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (1 < iVar1) {
        plVar3 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,4);
        in_stack_00000020._4_4_ = 1;
        lVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e916b8,(long)&stack0x00000020 + 4);
        if (plVar3 == (long *)0x0) goto LAB_06de6e88;
        if ((lVar8 != 0) &&
           (lVar5 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_06de6ec4:
          uVar7 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar7,0);
        }
        if ((int)plVar3[3] == 0) {
LAB_06de6ec0:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar3[4] = lVar8;
        thunk_FUN_03d233cc(plVar3 + 4,lVar8);
        if (*(long *)PTR_DAT_08e91af0 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = thunk_FUN_03cf5138(*(long *)PTR_DAT_08e91af0,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar8 == 0) goto LAB_06de6ec4;
          lVar8 = *(long *)PTR_DAT_08e91af0;
        }
        if (*(uint *)(plVar3 + 3) < 2) goto LAB_06de6ec0;
        plVar3[5] = lVar8;
        thunk_FUN_03d233cc();
        in_stack_00000018 = in_stack_00000008;
        lVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e83ab0,&stack0x00000018);
        if ((lVar8 != 0) &&
           (lVar5 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_06de6ec4;
        if (*(uint *)(plVar3 + 3) < 3) goto LAB_06de6ec0;
        plVar3[6] = lVar8;
        thunk_FUN_03d233cc(plVar3 + 6,lVar8);
        if ((*(long *)(unaff_x20 + 0x28) == 0) ||
           (plVar6 = (long *)FUN_05a524d0(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x29),
           plVar6 == (long *)0x0)) goto LAB_06de6e88;
        lVar8 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e91ad0) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06de6da0;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e91ad0,0);
LAB_06de6da0:
        in_stack_00000010._4_4_ = (*(code *)*puVar4)(plVar6,puVar4[1]);
        lVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,(long)&stack0x00000010 + 4);
        if ((lVar8 != 0) &&
           (lVar5 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_06de6ec4;
        if (*(uint *)(plVar3 + 3) < 4) goto LAB_06de6ec0;
        plVar3[7] = lVar8;
        thunk_FUN_03d233cc(plVar3 + 7,lVar8);
        FUN_06de4550();
        FUN_06de507c();
      }
      if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06de6e88;
      uVar7 = FUN_05a524d0(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x29);
      unaff_x22 = FUN_046198cc(uVar7,*unaff_x19);
      lVar8 = *unaff_x26;
    } while (*(int *)(lVar8 + 0xe0) != 0);
    thunk_FUN_03cd7500(lVar8);
  } while( true );
}


