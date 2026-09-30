/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsli_n_u32
ENTRY_POINT: 01fe8c30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fe8d58) */
/* WARNING: Removing unreachable block (ram,0x01fe8f38) */
/* WARNING: Removing unreachable block (ram,0x01fe8f30) */

void Unity_Burst_Intrinsics_Arm_Neon__vsli_n_u32(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong in_x9;
  long in_x10;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  char cStack000000000000000c;
  
  do {
    piVar9 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_01fe8c6c;
      }
      in_x9 = in_x9 - 1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
    do {
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01fe8c6c:
      plVar5 = (long *)(*(code *)*puVar4)();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *plVar5;
      bVar1 = *(byte *)(*unaff_x26 + 300);
      if ((*(byte *)(lVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar5);
      }
      (**(code **)(lVar7 + 0x178))(plVar5,*(undefined8 *)(lVar7 + 0x180));
      (**(code **)(*unaff_x20 + 0x318))();
      lVar7 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01fe8c0c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01fe8c0c:
      uVar8 = (*(code *)*puVar4)();
      if ((uVar8 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_00d6225c();
        if (plVar5 == (long *)0x0) goto LAB_01fe8d4c;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 == 0) goto LAB_01fe8d24;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_01fe8d0c;
      }
      param_1 = *unaff_x21;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_01fe8d0c:
    if (*(long *)(piVar9 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_01fe8d40;
    }
  }
LAB_01fe8d24:
  puVar4 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x25,0);
FUN_01fe8d40:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_01fe8d4c:
  plVar5 = (long *)(**(code **)(*unaff_x20 + 0x398))();
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_01fe8dd0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x24,1);
LAB_01fe8dd0:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    uVar6 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar3);
    plVar5 = (long *)(**(code **)(*unaff_x20 + 0x398))();
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01fe8e58;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x24,0);
LAB_01fe8e58:
      (*(code *)*puVar4)(plVar5,uVar6,0,puVar4[1]);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_017d75a8(uVar10,&stack0x0000000c,0);
      puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03780807 == '\0') {
        thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
        DAT_03780807 = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x20);
      if (cStack000000000000000c != '\0') {
        thunk_FUN_00d56f10(uVar10,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


