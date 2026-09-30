/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdot_lane_s32
ENTRY_POINT: 01ffe9d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_5
*/


long * Unity_Burst_Intrinsics_Arm_Neon__vdot_lane_s32(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  long in_x10;
  int *piVar15;
  long *unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x29;
  
  puVar6 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar5 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_128>_SliceWithStride<Vector4>__
  ;
  puVar4 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
  puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  plVar10 = unaff_x20;
  if (*(long *)(in_x9 + in_x10 * 8 + -8) != param_1) {
    plVar10 = (long *)0x0;
  }
  if (unaff_x22 == 0) {
    return unaff_x20;
  }
  if (*(long *)(unaff_x22 + 0x18) == 0) {
    return unaff_x20;
  }
  if (unaff_x19 != (long *)0x0) {
    if (plVar10 != (long *)0x0) {
      lVar12 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 5) * 0x10 + 0x138);
            goto FUN_01ffea68;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar10,*(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo,5);
FUN_01ffea68:
      uVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if ((uVar14 & 1) == 0) goto LAB_01ffeb58;
    }
    lVar12 = *(long *)puVar6;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar12 = *(long *)puVar6;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x48);
    if (lVar12 == 0) goto LAB_01ffef24;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w21) goto LAB_01ffef28;
    thunk_FUN_00d61fa0(*(undefined8 *)puVar4);
    lVar12 = *unaff_x19;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ffeb18;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffeb18:
    plVar9 = (long *)(*(code *)*puVar8)();
    if (((plVar9 != (long *)0x0) && (*plVar9 == *(long *)puVar5)) &&
       (uVar14 = FUN_01fffd5c(plVar9), (uVar14 & 1) != 0)) {
      return (long *)plVar9[3];
    }
  }
LAB_01ffeb58:
  if (plVar10 == (long *)0x0) {
LAB_01ffebbc:
    plVar10 = (long *)thunk_FUN_00d62348(*unaff_x29);
    if (plVar10 == (long *)0x0) goto LAB_01ffef24;
    FUN_01743e28();
  }
  else {
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 5) * 0x10 + 0x138);
          goto LAB_01ffebac;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,5);
LAB_01ffebac:
    uVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if ((uVar14 & 1) != 0) goto LAB_01ffebbc;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar9 = (long *)FUN_01ffa590(plVar10);
  puVar1 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar3 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = System_IndexOutOfRangeException_TypeInfo;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9;
  }
  if (unaff_x19 == (long *)0x0) {
    return plVar10;
  }
  if (unaff_w21 == 2) {
    if (plVar10 == (long *)0x0) goto LAB_01ffef24;
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01ffed40;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffed40:
    puVar1 = System_Data_SqlTypes_SqlByte___TypeInfo;
    uVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    uVar11 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar7);
    lVar13 = *plVar10;
    lVar12 = *(long *)puVar3;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ffedf8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar10,lVar12,0);
LAB_01ffedf8:
    (*(code *)*puVar8)(plVar10,uVar11,0,puVar8[1]);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar12 == 0) goto LAB_01ffef24;
    FUN_01fd8fec(lVar12,uVar11,1,0);
  }
  else if (unaff_w21 == 1) {
    if (plVar10 == (long *)0x0) goto LAB_01ffef24;
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01ffecc8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffecc8:
    puVar2 = StringLiteral_3724;
    uVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    uVar11 = FUN_00da4fb8(*(undefined8 *)puVar1,uVar7);
    lVar13 = *plVar10;
    lVar12 = *(long *)puVar3;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ffedb4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar10,lVar12,0);
LAB_01ffedb4:
    (*(code *)*puVar8)(plVar10,uVar11,0,puVar8[1]);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar12 == 0) goto LAB_01ffef24;
    FUN_01fdf08c(lVar12,uVar11,1,0);
  }
  else {
    lVar12 = 0;
  }
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  if (lVar13 != 0) {
    FUN_017b46ec(lVar13,0);
    *(long *)(lVar13 + 0x10) = unaff_x22;
    *(long *)(lVar13 + 0x18) = lVar12;
    lVar12 = *(long *)puVar6;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar12 = *(long *)puVar6;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x48);
    if (lVar12 != 0) {
      if (unaff_w21 < *(uint *)(lVar12 + 0x18)) {
        thunk_FUN_00d61fa0(*(undefined8 *)puVar4);
        lVar12 = *unaff_x19;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_01ffeeec;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffeeec:
        (*(code *)*puVar8)();
        return plVar10;
      }
LAB_01ffef28:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_01ffef24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


