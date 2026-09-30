/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeTokenAsync
ENTRY_POINT: 013ee964
PROGRAM: Lovesick-libil2cpp.so
SCORE: 139
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;strong_file_logging_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeTokenAsync(long param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  double unaff_d8;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000050;
  double in_stack_00000058;
  long in_stack_00000068;
  
  do {
    in_stack_00000008 = FUN_02040648(param_1,param_2);
    in_stack_00000050 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar2 = in_stack_00000028;
    in_stack_00000050 = unaff_d8 + in_stack_00000050;
    if (*(long *)(unaff_x22 + 0xa0) == 0) {
LAB_013eee44:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0xa0),0);
    in_stack_00000028 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar1 = in_stack_00000048;
    in_stack_00000028 = dVar2 + in_stack_00000028;
    if (*(long *)(unaff_x22 + 0xc0) == 0) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0xc0),0);
    in_stack_00000048 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar2 = in_stack_00000040;
    in_stack_00000048 = dVar1 + in_stack_00000048;
    if (*(long *)(unaff_x22 + 200) == 0) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 200),0);
    in_stack_00000040 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar1 = in_stack_00000038;
    in_stack_00000040 = dVar2 + in_stack_00000040;
    if (*(long *)(unaff_x22 + 0xd0) == 0) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0xd0),0);
    in_stack_00000038 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar2 = in_stack_00000030;
    in_stack_00000038 = dVar1 + in_stack_00000038;
    if (*(long *)(unaff_x22 + 0xd8) == 0) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0xd8),0);
    in_stack_00000030 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar1 = in_stack_00000020;
    in_stack_00000030 = dVar2 + in_stack_00000030;
    if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0xe0),0);
    in_stack_00000020 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar2 = in_stack_00000018;
    in_stack_00000020 = dVar1 + in_stack_00000020;
    if (*(long *)(unaff_x22 + 0xe8) == 0) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0xe8),0);
    in_stack_00000018 = (double)FUN_01788a00(&stack0x00000008,0);
    dVar1 = in_stack_00000010;
    in_stack_00000018 = dVar2 + in_stack_00000018;
    if (*(long *)(unaff_x22 + 0xf0) == 0) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0xf0),0);
    in_stack_00000010 = (double)FUN_01788a00(&stack0x00000008,0);
    in_stack_00000010 = dVar1 + in_stack_00000010;
    unaff_w20 = unaff_w20 + 1;
    if ((*(long *)(unaff_x19 + 0x58) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x58) + 0x98), lVar4 == 0)) goto LAB_013eee44;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      plVar5 = (long *)thunk_FUN_00d62348(*unaff_x29);
      if (((plVar5 != (long *)0x0) && (FUN_0160aa4c(plVar5,0), *(long *)(unaff_x19 + 0x58) != 0)) &&
         (plVar6 = (long *)FUN_013eae18(), plVar6 != (long *)0x0)) {
        lVar4 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar9 == 0) goto LAB_013eeb4c;
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        break;
      }
      goto LAB_013eee44;
    }
    FUN_0132138c(lVar4,unaff_w20,&stack0x00000068,*unaff_x28);
    dVar2 = in_stack_00000058;
    if (((in_stack_00000068 == 0) ||
        (unaff_x22 = *(long *)(in_stack_00000068 + 0x10), unaff_x22 == 0)) ||
       (*(long *)(unaff_x22 + 0x90) == 0)) goto LAB_013eee44;
    in_stack_00000008 = FUN_02040648(*(long *)(unaff_x22 + 0x90),0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x21);
    }
    in_stack_00000058 = (double)FUN_01788a00(&stack0x00000008,0);
    in_stack_00000058 = dVar2 + in_stack_00000058;
    param_1 = *(long *)(unaff_x22 + 0x98);
    if (param_1 == 0) goto LAB_013eee44;
    param_2 = 0;
    unaff_d8 = in_stack_00000050;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *unaff_x27) {
      puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0x2c) * 0x10 + 0x138);
      goto LAB_013eeb6c;
    }
  }
LAB_013eeb4c:
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x27,0x2c);
LAB_013eeb6c:
  iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if (iVar3 != 1) {
    unaff_x24 = unaff_x26;
  }
  uVar8 = FUN_015f5b28(*unaff_x25,*unaff_x24,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000058,0);
  uVar8 = FUN_015f5b28(*unaff_x23,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000050,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
                       ,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000028,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f5290,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000048,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f2ef8,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000040,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)System_Dynamic_IDynamicMetaObjectProvider_var,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000038,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)
                        Method_System_Collections_Generic_List<SimpleTuple<Face,_Edge>>__ctor__,
                       uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000030,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f20c0,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  FUN_0160c8e8(plVar5,*(undefined8 *)PTR_DAT_033f6810,0);
  uVar8 = FUN_01756270(&stack0x00000020,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)System_Xml_Serialization_XmlNodeEventArgs_TypeInfo,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000018,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)StringLiteral_11371,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = FUN_01756270(&stack0x00000010,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)OVRPlugin_Vector3f_var,uVar8,0);
  FUN_0160c8e8(plVar5,uVar8,0);
  uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_302);
  }
  FUN_02660dac(uVar8,0);
  return;
}


