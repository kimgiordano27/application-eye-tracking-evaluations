/*
FUNCTION_NAME: Unity.Properties.TypeConverter<float,-ushort>$$Invoke
ENTRY_POINT: 050c4c70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 Unity_Properties_TypeConverter<float,_ushort>__Invoke(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  short *psVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x48);
  if (*(int *)(param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(param_1);
  }
  uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x68) + 0x20,0);
  uVar2 = FUN_05e19a88(uVar7,uVar1,0);
  if ((uVar2 & 1) == 0) {
LAB_050c4d08:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
    uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x70) + 0x20,0);
    uVar2 = FUN_05e19a88(uVar7,uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      plVar4 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar4 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x70) + 0x40))
      goto LAB_050c5130;
      plVar4 = (long *)thunk_FUN_0322f29c();
      if (*plVar4 == 0) goto LAB_050c5070;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
    uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x38) + 0x20,0);
    uVar2 = FUN_05e19a88(uVar7,uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      plVar4 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar4 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40))
      goto LAB_050c5130;
      psVar5 = (short *)thunk_FUN_0322f29c();
      if (*psVar5 == 0) goto LAB_050c5070;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
    uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x40) + 0x20,0);
    uVar2 = FUN_05e19a88(uVar7,uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      plVar4 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar4 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x40) + 0x40))
      goto LAB_050c5130;
      psVar5 = (short *)thunk_FUN_0322f29c();
      if (*psVar5 == 0) goto LAB_050c5070;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
    uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x58) + 0x20,0);
    uVar2 = FUN_05e19a88(uVar7,uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      plVar4 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar4 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40))
      goto LAB_050c5130;
      plVar4 = (long *)thunk_FUN_0322f29c();
      if (*plVar4 == 0) goto LAB_050c5070;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
    uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar2 = FUN_05e19a88(uVar7,uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      plVar4 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar4 == (long *)0x0) {
Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x60) + 0x40)) {
LAB_050c5130:
                    /* WARNING: Subroutine does not return */
        FUN_031f2730();
      }
      puVar6 = (undefined8 *)thunk_FUN_0322f29c();
      uVar2 = FUN_05e5b888(0,*puVar6,0);
      if ((uVar2 & 1) != 0) goto LAB_050c5070;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    uVar7 = thunk_FUN_0322f148();
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    FUN_05101f20(uVar7,unaff_w20,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  }
  else {
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    plVar4 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                        &stack0x0000000c);
    if (plVar4 == (long *)0x0)
    goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x68) + 0x40))
    goto LAB_050c5130;
    plVar4 = (long *)thunk_FUN_0322f29c();
    if (*plVar4 != 0) goto LAB_050c4d08;
LAB_050c5070:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
  }
  return uVar7;
}


