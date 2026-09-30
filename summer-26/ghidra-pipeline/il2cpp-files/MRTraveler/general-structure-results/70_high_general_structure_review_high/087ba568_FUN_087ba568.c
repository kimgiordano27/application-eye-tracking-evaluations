/*
FUNCTION_NAME: FUN_087ba568
ENTRY_POINT: 087ba568
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_6
*/


long FUN_087ba568(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0943cf03 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e86398);
    FUN_03c8f898(System_Func<Spectrum_Point,_float>_TypeInfo);
    FUN_03c8f898(System_Func<VisualEffectControlTrackController_Event,_double>_TypeInfo);
    FUN_03c8f898(
                System_Func<NativeArray<byte>,_CAPI_ovrAvatar2DataFormat,_NativeArray<byte>>_TypeInfo
                );
    FUN_03c8f898(System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    FUN_03c8f898(System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
    FUN_03c8f898(System_Func<bool,_bool,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_byte,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_Decimal,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_double,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_short,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_int,_object>_TypeInfo);
                    /* try { // try from 087ba610 to 088ba823 has its CatchHandler @ 087ba610
                       catch() { ... } // from try @ 087ba610 with catch @ 087ba610
                       catch() { ... } // from try @ 087ba8d0 with catch @ 087ba610
                       catch() { ... } // from try @ 087ba9a4 with catch @ 087ba610
                       catch() { ... } // from try @ 087ba9cc with catch @ 087ba610
                       catch() { ... } // from try @ 087baaa0 with catch @ 087ba610 */
    FUN_03c8f898(System_Func<byte,_long,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_sbyte,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_float,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_ushort,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_uint,_object>_TypeInfo);
    FUN_03c8f898(System_Func<byte,_ulong,_object>_TypeInfo);
    FUN_03c8f898(System_Func<Color,_Color,_bool>_TypeInfo);
    FUN_03c8f898(System_Func<CreateLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo);
    FUN_03c8f898(
                System_Func<CreateOrJoinLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo
                );
    FUN_03c8f898(
                System_Func<CreateTicketRequest,_Configuration,_Task<Response<CreateTicketResponse>>>_TypeInfo
                );
    FUN_03c8f898(System_Func<Decimal,_byte,_object>_TypeInfo);
    FUN_03c8f898(System_Func<Decimal,_Decimal,_object>_TypeInfo);
    FUN_03c8f898(System_Func<Decimal,_short,_object>_TypeInfo);
    DAT_0943cf03 = 1;
  }
  puVar1 = System_Func<Decimal,_short,_object>_TypeInfo;
  switch(param_1) {
  case 1:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_long,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar3 = lVar2;
    break;
  case 2:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_uint,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar3 = lVar2;
    break;
  case 3:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_ulong,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    *plVar3 = lVar2;
    break;
  case 4:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<Color,_Color,_bool>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    *plVar3 = lVar2;
    break;
  case 5:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,
                 *(undefined8 *)
                  System_Func<CreateLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    *plVar3 = lVar2;
    break;
  case 6:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,
                 *(undefined8 *)
                  System_Func<CreateOrJoinLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo
                 ,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    *plVar3 = lVar2;
    break;
  case 7:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,
                 *(undefined8 *)
                  System_Func<CreateTicketRequest,_Configuration,_Task<Response<CreateTicketResponse>>>_TypeInfo
                 ,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
    *plVar3 = lVar2;
    break;
  case 8:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x48);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<Decimal,_byte,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
    *plVar3 = lVar2;
    break;
  case 9:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x50);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<Decimal,_Decimal,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
    *plVar3 = lVar2;
    break;
  case 10:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x58);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,
                 *(undefined8 *)
                  System_Func<VisualEffectControlTrackController_Event,_double>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
    *plVar3 = lVar2;
    break;
  case 0xb:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x60);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,
                 *(undefined8 *)
                  System_Func<NativeArray<byte>,_CAPI_ovrAvatar2DataFormat,_NativeArray<byte>>_TypeInfo
                 ,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
    *plVar3 = lVar2;
    break;
  case 0xc:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,
                 *(undefined8 *)System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
    *plVar3 = lVar2;
    break;
  case 0xd:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x70);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,
                 *(undefined8 *)System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
    *plVar3 = lVar2;
    break;
  case 0xe:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x78);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<bool,_bool,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78);
    *plVar3 = lVar2;
    break;
  case 0xf:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x80);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_byte,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80);
    *plVar3 = lVar2;
    break;
  case 0x10:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x88);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_Decimal,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88);
    *plVar3 = lVar2;
    break;
  case 0x11:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x90);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_double,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90);
    *plVar3 = lVar2;
    break;
  case 0x12:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x98);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_short,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98);
    *plVar3 = lVar2;
    break;
  case 0x13:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa0);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_int,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0);
    *plVar3 = lVar2;
    break;
  case 0x14:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa8);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_sbyte,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8);
    *plVar3 = lVar2;
    break;
  case 0x15:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb0);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_float,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
    *plVar3 = lVar2;
    break;
  case 0x16:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb8);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<byte,_ushort,_object>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8);
    *plVar3 = lVar2;
    break;
  default:
    lVar2 = *(long *)System_Func<Decimal,_short,_object>_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86398);
    FUN_04d63ae4(lVar2,uVar5,*(undefined8 *)System_Func<Spectrum_Point,_float>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar2;
  }
  thunk_FUN_03d233cc(plVar3,lVar2);
  return lVar2;
}


