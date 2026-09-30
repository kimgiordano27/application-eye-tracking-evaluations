/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdotq_s32
ENTRY_POINT: 01ffe954
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_5
*/


long * Unity_Burst_Intrinsics_Arm_Neon__vdotq_s32(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x978));
  thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
  thunk_FUN_00d48444(System_Xml_Schema_Datatype_NOTATION_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_3724);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__);
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  *(undefined1 *)(unaff_x23 + 0x860) = 1;
  puVar7 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar6 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_128>_SliceWithStride<Vector4>__
  ;
  puVar5 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
  puVar4 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  puVar2 = PTR_DAT_033ee168;
  if (unaff_x20 == (long *)0x0) {
LAB_01ffe9c4:
    plVar11 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_033ee168 + 300);
    if (*(byte *)(*unaff_x20 + 300) < bVar1) goto LAB_01ffe9c4;
    plVar11 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033ee168)
    {
      plVar11 = (long *)0x0;
    }
  }
  if (unaff_x22 == 0) {
    return unaff_x20;
  }
  if (*(long *)(unaff_x22 + 0x18) == 0) {
    return unaff_x20;
  }
  if (unaff_x19 != (long *)0x0) {
    if (plVar11 != (long *)0x0) {
      lVar13 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto FUN_01ffea68;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo,5);
FUN_01ffea68:
      uVar15 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if ((uVar15 & 1) == 0) goto LAB_01ffeb58;
    }
    lVar13 = *(long *)puVar7;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar13 = *(long *)puVar7;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x48);
    if (lVar13 == 0) goto LAB_01ffef24;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_01ffef28;
    thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
    lVar13 = *unaff_x19;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ffeb18;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffeb18:
    plVar10 = (long *)(*(code *)*puVar9)();
    if (((plVar10 != (long *)0x0) && (*plVar10 == *(long *)puVar6)) &&
       (uVar15 = FUN_01fffd5c(plVar10), (uVar15 & 1) != 0)) {
      return (long *)plVar10[3];
    }
  }
LAB_01ffeb58:
  if (plVar11 == (long *)0x0) {
LAB_01ffebbc:
    plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (plVar11 == (long *)0x0) goto LAB_01ffef24;
    FUN_01743e28();
  }
  else {
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 5) * 0x10 + 0x138);
          goto LAB_01ffebac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,5);
LAB_01ffebac:
    uVar15 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar15 & 1) != 0) goto LAB_01ffebbc;
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar10 = (long *)FUN_01ffa590(plVar11);
  puVar3 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = System_IndexOutOfRangeException_TypeInfo;
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10;
  }
  if (unaff_x19 == (long *)0x0) {
    return plVar11;
  }
  if (unaff_w21 == 2) {
    if (plVar11 == (long *)0x0) goto LAB_01ffef24;
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01ffed40;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar11,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffed40:
    puVar3 = System_Data_SqlTypes_SqlByte___TypeInfo;
    uVar8 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    lVar14 = *plVar11;
    lVar13 = *(long *)puVar4;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ffedf8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar13,0);
LAB_01ffedf8:
    (*(code *)*puVar9)(plVar11,uVar12,0,puVar9[1]);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar13 == 0) goto LAB_01ffef24;
    FUN_01fd8fec(lVar13,uVar12,1,0);
  }
  else if (unaff_w21 == 1) {
    if (plVar11 == (long *)0x0) goto LAB_01ffef24;
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01ffecc8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar11,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffecc8:
    puVar2 = StringLiteral_3724;
    uVar8 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    lVar14 = *plVar11;
    lVar13 = *(long *)puVar4;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ffedb4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar13,0);
LAB_01ffedb4:
    (*(code *)*puVar9)(plVar11,uVar12,0,puVar9[1]);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar13 == 0) goto LAB_01ffef24;
    FUN_01fdf08c(lVar13,uVar12,1,0);
  }
  else {
    lVar13 = 0;
  }
  lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
  if (lVar14 != 0) {
    FUN_017b46ec(lVar14,0);
    *(long *)(lVar14 + 0x10) = unaff_x22;
    *(long *)(lVar14 + 0x18) = lVar13;
    lVar13 = *(long *)puVar7;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar13 = *(long *)puVar7;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x48);
    if (lVar13 != 0) {
      if (unaff_w21 < *(uint *)(lVar13 + 0x18)) {
        thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        lVar13 = *unaff_x19;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01ffeeec;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffeeec:
        (*(code *)*puVar9)();
        return plVar11;
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


