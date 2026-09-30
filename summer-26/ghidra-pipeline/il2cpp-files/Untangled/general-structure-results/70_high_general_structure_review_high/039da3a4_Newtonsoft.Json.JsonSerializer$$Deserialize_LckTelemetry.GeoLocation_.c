/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<LckTelemetry.GeoLocation>
ENTRY_POINT: 039da3a4
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<LckTelemetry_GeoLocation>(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*param_1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  puVar4 = (undefined8 *)thunk_FUN_02ef195c();
  in_stack_00000088 = *puVar4;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = (**(code **)(*unaff_x19 + 0x288))();
  puVar1 = PTR_DAT_06d37308;
  do {
    if (lVar5 == 0) {
      return;
    }
    uVar2 = FUN_0304a194(lVar5,0);
    if (0xc391948b < uVar2) {
      if (uVar2 < 0xfc0c4ef5) {
        if (uVar2 == 0xdd20d49c) {
          uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04ea0,0);
          if ((uVar6 & 1) == 0)
          goto Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>;
          lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                      (*unaff_x19 +
                                       (ulong)*(ushort *)(*(long *)PTR_DAT_06d37310 + 0x50) * 0x10 +
                                      0x140));
          (**(code **)(lVar5 + 8))();
          FUN_0672fd1c(&stack0x00000088,0);
        }
        else {
          if ((uVar2 != 0xfc0c4ef4) ||
             (uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04ea8,0), (uVar6 & 1) == 0)
             ) goto Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>;
          lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                      (*unaff_x19 +
                                       (ulong)*(ushort *)(*(long *)puVar1 + 0x50) * 0x10 + 0x140));
          (**(code **)(lVar5 + 8))(&stack0x00000068);
          in_stack_00000028 = in_stack_00000070;
          in_stack_00000020 = in_stack_00000068;
          in_stack_00000038 = in_stack_00000080;
          in_stack_00000030 = in_stack_00000078;
          FUN_0672faf0(&stack0x00000088,&stack0x00000020,0);
        }
      }
      else if (uVar2 == 0xfd0c5087) {
        uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04e90,0);
        if ((uVar6 & 1) == 0)
        goto Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>;
        lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                    (*unaff_x19 + (ulong)*(ushort *)(*(long *)puVar1 + 0x50) * 0x10
                                    + 0x140));
        (**(code **)(lVar5 + 8))(&stack0x00000068);
        in_stack_00000048 = in_stack_00000070;
        in_stack_00000040 = in_stack_00000068;
        in_stack_00000058 = in_stack_00000080;
        in_stack_00000050 = in_stack_00000078;
        FUN_0672f9c4(&stack0x00000088,&stack0x00000040,0);
      }
      else {
        if ((uVar2 != 0xff0c53ad) ||
           (uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04eb0,0), (uVar6 & 1) == 0))
        goto Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>;
        lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                    (*unaff_x19 + (ulong)*(ushort *)(*(long *)puVar1 + 0x50) * 0x10
                                    + 0x140));
        (**(code **)(lVar5 + 8))(&stack0x00000068);
        FUN_0672fc1c(&stack0x00000088);
      }
      goto LAB_039da860;
    }
    if (uVar2 < 0x2b49f33f) {
      if (uVar2 == 0x2f3b39e) {
        uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04338,0);
        if ((uVar6 & 1) == 0)
        goto Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>;
        lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                    (*unaff_x19 +
                                     (ulong)*(ushort *)(*(long *)PTR_DAT_06d37370 + 0x50) * 0x10 +
                                    0x140));
        uVar2 = (**(code **)(lVar5 + 8))();
        FUN_0672f898(&stack0x00000088,uVar2 & 1,0);
      }
      else if ((uVar2 == 0x2b49f33e) &&
              (uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04e98,0), (uVar6 & 1) != 0
              )) {
        lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                    (*unaff_x19 +
                                     (ulong)*(ushort *)(*(long *)PTR_DAT_06d37310 + 0x50) * 0x10 +
                                    0x140));
        (**(code **)(lVar5 + 8))();
        FUN_0672ff3c(&stack0x00000088,0);
      }
      else {
Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>:
        (**(code **)(*unaff_x19 + 0x3c8))();
      }
    }
    else if (uVar2 == 0xc391948b) {
      uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04eb8,0);
      if ((uVar6 & 1) == 0)
      goto Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>;
      lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                  (*unaff_x19 +
                                   (ulong)*(ushort *)(*(long *)PTR_DAT_06d37310 + 0x50) * 0x10 +
                                  0x140));
      (**(code **)(lVar5 + 8))();
      FUN_0672fe2c(&stack0x00000088,0);
    }
    else {
      if ((uVar2 != 0x3553e285) ||
         (uVar6 = thunk_FUN_05464b70(lVar5,*(undefined8 *)PTR_DAT_06d04ec8,0), (uVar6 & 1) == 0))
      goto Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>;
      lVar5 = thunk_FUN_02edd730(*(undefined8 *)
                                  (*unaff_x19 +
                                   (ulong)*(ushort *)(*(long *)PTR_DAT_06d37448 + 0x50) * 0x10 +
                                  0x140));
      uVar3 = (**(code **)(lVar5 + 8))();
      FUN_0673004c(&stack0x00000088,uVar3,0);
    }
LAB_039da860:
    lVar5 = (**(code **)(*unaff_x19 + 0x288))();
  } while( true );
}


