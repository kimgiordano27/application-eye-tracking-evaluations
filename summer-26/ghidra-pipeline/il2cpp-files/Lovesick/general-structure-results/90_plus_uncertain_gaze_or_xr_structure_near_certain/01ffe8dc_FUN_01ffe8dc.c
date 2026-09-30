/*
FUNCTION_NAME: FUN_01ffe8dc
ENTRY_POINT: 01ffe8dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_6
*/


long * FUN_01ffe8dc(uint param_1,long *param_2,long param_3,undefined8 param_4,long *param_5)

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
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_03780860 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ee168);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_128>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(System_Data_SqlTypes_SqlByte___TypeInfo);
    thunk_FUN_00d48444(System_IndexOutOfRangeException_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_NOTATION_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3724);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__)
    ;
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_03780860 = 1;
  }
  puVar7 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar6 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_128>_SliceWithStride<Vector4>__
  ;
  puVar5 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
  puVar4 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  puVar2 = PTR_DAT_033ee168;
  if (param_2 == (long *)0x0) {
LAB_01ffe9c4:
    plVar12 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_033ee168 + 300);
    if (*(byte *)(*param_2 + 300) < bVar1) goto LAB_01ffe9c4;
    plVar12 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033ee168) {
      plVar12 = (long *)0x0;
    }
  }
  if (param_3 == 0) {
    return param_2;
  }
  if (*(long *)(param_3 + 0x18) == 0) {
    return param_2;
  }
  if (param_5 != (long *)0x0) {
    if (plVar12 != (long *)0x0) {
      lVar13 = *plVar12;
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
               FUN_00d59724(plVar12,*(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo,5);
FUN_01ffea68:
      uVar15 = (*(code *)*puVar9)(plVar12,puVar9[1]);
      if ((uVar15 & 1) == 0) goto LAB_01ffeb58;
    }
    lVar13 = *(long *)puVar7;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar13 = *(long *)puVar7;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x48);
    if (lVar13 == 0) goto LAB_01ffef24;
    if (*(uint *)(lVar13 + 0x18) <= param_1) goto LAB_01ffef28;
    lVar13 = lVar13 + (long)(int)param_1 * 0x10;
    local_70 = *(undefined8 *)(lVar13 + 0x20);
    uStack_68 = *(undefined8 *)(lVar13 + 0x28);
    uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_70);
    lVar13 = *param_5;
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
    puVar9 = (undefined8 *)
             FUN_00d59724(param_5,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,0
                         );
LAB_01ffeb18:
    plVar11 = (long *)(*(code *)*puVar9)(param_5,uVar10,puVar9[1]);
    if (((plVar11 != (long *)0x0) && (*plVar11 == *(long *)puVar6)) &&
       (uVar15 = FUN_01fffd5c(plVar11,param_3), (uVar15 & 1) != 0)) {
      return (long *)plVar11[3];
    }
  }
LAB_01ffeb58:
  if (plVar12 == (long *)0x0) {
LAB_01ffebbc:
    plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (plVar12 == (long *)0x0) goto LAB_01ffef24;
    FUN_01743e28(plVar12,param_2,0);
  }
  else {
    lVar13 = *plVar12;
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
    puVar9 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,5);
LAB_01ffebac:
    uVar15 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    if ((uVar15 & 1) != 0) goto LAB_01ffebbc;
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar11 = (long *)FUN_01ffa590(plVar12,param_3);
  puVar3 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = System_IndexOutOfRangeException_TypeInfo;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11;
  }
  if (param_5 == (long *)0x0) {
    return plVar12;
  }
  if (param_1 == 2) {
    if (plVar12 == (long *)0x0) goto LAB_01ffef24;
    lVar13 = *plVar12;
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
             FUN_00d59724(plVar12,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffed40:
    puVar3 = System_Data_SqlTypes_SqlByte___TypeInfo;
    uVar8 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    uVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    lVar14 = *plVar12;
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
    puVar9 = (undefined8 *)FUN_00d59724(plVar12,lVar13,0);
LAB_01ffedf8:
    (*(code *)*puVar9)(plVar12,uVar10,0,puVar9[1]);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar13 == 0) goto LAB_01ffef24;
    FUN_01fd8fec(lVar13,uVar10,1,0);
  }
  else if (param_1 == 1) {
    if (plVar12 == (long *)0x0) goto LAB_01ffef24;
    lVar13 = *plVar12;
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
             FUN_00d59724(plVar12,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffecc8:
    puVar2 = StringLiteral_3724;
    uVar8 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    uVar10 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    lVar14 = *plVar12;
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
    puVar9 = (undefined8 *)FUN_00d59724(plVar12,lVar13,0);
LAB_01ffedb4:
    (*(code *)*puVar9)(plVar12,uVar10,0,puVar9[1]);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar13 == 0) goto LAB_01ffef24;
    FUN_01fdf08c(lVar13,uVar10,1,0);
  }
  else {
    lVar13 = 0;
  }
  lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
  if (lVar14 != 0) {
    FUN_017b46ec(lVar14,0);
    *(long *)(lVar14 + 0x10) = param_3;
    *(long *)(lVar14 + 0x18) = lVar13;
    lVar13 = *(long *)puVar7;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar13 = *(long *)puVar7;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x48);
    if (lVar13 != 0) {
      if (param_1 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)param_1 * 0x10;
        local_70 = *(undefined8 *)(lVar13 + 0x20);
        uStack_68 = *(undefined8 *)(lVar13 + 0x28);
        uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_70);
        lVar13 = *param_5;
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
        puVar9 = (undefined8 *)
                 FUN_00d59724(param_5,*(long *)
                                       System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1);
LAB_01ffeeec:
        (*(code *)*puVar9)(param_5,uVar10,lVar14,puVar9[1]);
        return plVar12;
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


