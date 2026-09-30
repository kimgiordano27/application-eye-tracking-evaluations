/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcopyq_laneq_s64
ENTRY_POINT: 01ffaac4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_possible_biometrics_hits_3
*/


long * Unity_Burst_Intrinsics_Arm_Neon__vcopyq_laneq_s64(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  *(undefined1 *)(unaff_x19 + 0x849) = 1;
  puVar4 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (unaff_x20 == 0) {
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__
                                       );
    if (plVar6 == (long *)0x0) goto LAB_01ffae80;
    uVar9 = 0;
    goto LAB_01ffae60;
  }
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)Unity_Burst_Intrinsics_Arm_Neon__vrbit_u8();
  puVar3 = Method_System_Collections_Generic_List<Module>__ctor__;
  if (plVar6 == (long *)0x0) goto LAB_01ffae80;
  lVar10 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)Method_System_Collections_Generic_List<Module>__ctor__
         ) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_01ffab70;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_00d59724(plVar6,*(long *)Method_System_Collections_Generic_List<Module>__ctor__,0);
LAB_01ffab70:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  lVar10 = thunk_FUN_00d6225c();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
    if (lVar10 == 0) goto LAB_01ffac00;
LAB_01ffaba0:
    if ((unaff_w21 & 1) == 0) goto LAB_01ffacec;
    plVar8 = (long *)FUN_01ffb09c();
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01ffad00;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar8,lVar10,0);
LAB_01ffad00:
      uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      plVar6 = (long *)FUN_01ffb158(0,plVar6,uVar9);
    }
  }
  else {
    if (lVar10 != 0) goto LAB_01ffaba0;
LAB_01ffac00:
    uVar9 = FUN_01ff1698();
    plVar6 = (long *)FUN_01ffdb78(0,plVar6,uVar9);
    plVar8 = (long *)FUN_01ffb09c();
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01ffac90;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar8,lVar10,0);
LAB_01ffac90:
      uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      plVar6 = (long *)FUN_01ffb158(0,plVar6,uVar9);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
LAB_01ffacec:
    plVar6 = (long *)FUN_01ffc29c(0,plVar6);
  }
  puVar3 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar6 != (long *)0x0) {
    lVar10 = *(long *)puVar4;
    bVar1 = *(byte *)(lVar10 + 300);
    if ((bVar1 <= *(byte *)(*plVar6 + 300)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == lVar10)) {
      return plVar6;
    }
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_01ffadcc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,1
                         );
LAB_01ffadcc:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar5);
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01ffae38;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ffae38:
    (*(code *)*puVar7)(plVar6,uVar9,0,puVar7[1]);
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (plVar6 != (long *)0x0) {
LAB_01ffae60:
      FUN_020cc648(plVar6,uVar9,0);
      return plVar6;
    }
  }
LAB_01ffae80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


